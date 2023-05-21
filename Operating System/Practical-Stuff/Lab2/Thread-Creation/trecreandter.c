#include <stdio.h>
#include <pthread.h>

void *thread_function(void *arg)
{
    pthread_t thread_id = pthread_self();
    printf("Thread %lu started.\n", thread_id);

    // Perform some task in the thread

    printf("Thread %lu finished.\n", thread_id);
    return NULL;
}

int main()
{
    pthread_t thread_id;

    printf("Main thread %lu started.\n", pthread_self());

    // Create a new thread
    pthread_create(&thread_id, NULL, thread_function, NULL);

    // Wait for the thread to finish
    pthread_join(thread_id, NULL);

    printf("Main thread %lu finished.\n", pthread_self());

    return 0;
}
