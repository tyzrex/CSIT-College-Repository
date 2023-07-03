#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/shm.h>

#define SHM_SIZE 1024

int main()
{
    key_t key;
    int shmid;
    char *shmaddr;

    // Generate a unique key
    key = ftok(".", 'x');

    // Create the shared memory segment
    shmid = shmget(key, SHM_SIZE, IPC_CREAT | 0666);
    if (shmid == -1)
    {
        perror("shmget");
        exit(1);
    }

    // Attach to the shared memory segment
    shmaddr = shmat(shmid, NULL, 0);
    if (shmaddr == (char *)-1)
    {
        perror("shmat");
        exit(1);
    }

    // Parent process writes data into shared memory
    sprintf(shmaddr, "Hello from the parent process!");

    // Fork a child process
    pid_t pid = fork();

    if (pid < 0)
    {
        perror("fork");
        exit(1);
    }
    else if (pid == 0)
    {
        // Child process reads data from shared memory
        printf("Child process received: %s\n", shmaddr);
        exit(0);
    }
    else
    {
        // Parent process waits for the child to complete
        wait(NULL);
    }

    // Detach from the shared memory segment
    if (shmdt(shmaddr) == -1)
    {
        perror("shmdt");
        exit(1);
    }

    // Delete the shared memory segment
    if (shmctl(shmid, IPC_RMID, 0) == -1)
    {
        perror("shmctl");
        exit(1);
    }

    return 0;
}
