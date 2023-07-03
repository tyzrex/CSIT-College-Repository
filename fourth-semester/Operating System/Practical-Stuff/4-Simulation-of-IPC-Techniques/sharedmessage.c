#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/msg.h>
#include <string.h>

#define MSG_SIZE 256

struct message
{
    long mtype;
    char mtext[MSG_SIZE];
};

int main()
{
    key_t key;
    int msgid;
    struct message msg;

    // Generate a unique key
    key = ftok(".", 'x');

    // Create the message queue
    msgid = msgget(key, IPC_CREAT | 0666);
    if (msgid == -1)
    {
        perror("msgget");
        exit(1);
    }

    // Fork a child process
    pid_t pid = fork();

    if (pid < 0)
    {
        perror("fork");
        exit(1);
    }
    else if (pid == 0)
    {
        // Child process receives message
        if (msgrcv(msgid, &msg, MSG_SIZE, 1, 0) == -1)
        {
            perror("msgrcv");
            exit(1);
        }
        printf("Child process received: %s\n", msg.mtext);
        exit(0);
    }
    else
    {
        // Parent process sends message
        msg.mtype = 1;
        strncpy(msg.mtext, "Hello from the parent process!", MSG_SIZE);

        if (msgsnd(msgid, &msg, strlen(msg.mtext) + 1, 0) == -1)
        {
            perror("msgsnd");
            exit(1);
        }

        // Parent process waits for the child to complete
        wait(NULL);
    }

    // Delete the message queue
    if (msgctl(msgid, IPC_RMID, NULL) == -1)
    {
        perror("msgctl");
        exit(1);
    }

    return 0;
}
