#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

/* Execute the command using this shell program.  */
#define SHELL "/bin/sh"

int my_system(const char *command)
{
    int status;
    pid_t pid;

    printf("Parent process (PID: %d)\n", getpid());

    pid = fork();
    if (pid == 0)
    {
        printf("Child process (PID: %d)\n", getpid());

        /* This is the child process.  Execute the shell command. */
        execl(SHELL, SHELL, "-c", command, NULL);
        _exit(EXIT_FAILURE);
    }
    else if (pid < 0)
    {
        /* The fork failed.  Report failure.  */
        status = -1;
        printf("Fork failed\n");
    }
    else
    {
        /* This is the parent process.  Wait for the child to complete.  */
        printf("Parent process continuing...\n");
        printf("Waiting for child process (PID: %d) to terminate...\n", pid);
        if (waitpid(pid, &status, 0) != pid)
        {
            status = -1;
            printf("Waiting for child process failed\n");
        }
        else
        {
            if (WIFEXITED(status))
                printf("Child process (PID: %d) terminated with exit status: %d\n", pid, WEXITSTATUS(status));
            else if (WIFSIGNALED(status))
                printf("Child process (PID: %d) terminated due to unhandled signal: %d\n", pid, WTERMSIG(status));
        }
    }

    return status;
}

int main()
{
    my_system("ls -l");
    return 0;
}
