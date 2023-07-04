#include <stdio.h>

void printFrames(int frames[], int capacity)
{
    printf("|");
    for (int i = 0; i < capacity; i++)
    {
        if (frames[i] == -1)
        {
            printf("  |");
        }
        else
        {
            printf(" %d |", frames[i]);
        }
    }
    printf("\n");
}

int search(int frames[], int capacity, int page)
{
    for (int i = 0; i < capacity; i++)
    {
        if (frames[i] == page)
        {
            return i;
        }
    }
    return -1;
}
