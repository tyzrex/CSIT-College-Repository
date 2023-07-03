#include <stdio.h>

#define MAX_PROCESSES 10

struct Process
{
    int arrivalTime;
    int burstTime;
    int completionTime;
    int waitingTime;
    int turnaroundTime;
};

void calculateCompletionTime(struct Process processes[], int n)
{
    int currentTime = 0;

    for (int i = 0; i < n; i++)
    {
        if (currentTime < processes[i].arrivalTime)
            currentTime = processes[i].arrivalTime;

        currentTime += processes[i].burstTime;
        processes[i].completionTime = currentTime;
    }
}

void calculateWaitingTime(struct Process processes[], int n)
{
    for (int i = 0; i < n; i++)
    {
        processes[i].waitingTime = processes[i].completionTime - processes[i].arrivalTime - processes[i].burstTime;
    }
}

void calculateTurnaroundTime(struct Process processes[], int n)
{
    for (int i = 0; i < n; i++)
    {
        processes[i].turnaroundTime = processes[i].burstTime + processes[i].waitingTime;
    }
}

void calculateAverageTimes(struct Process processes[], int n, float *avgWaitingTime, float *avgTurnaroundTime)
{
    int totalWaitingTime = 0;
    int totalTurnaroundTime = 0;

    for (int i = 0; i < n; i++)
    {
        totalWaitingTime += processes[i].waitingTime;
        totalTurnaroundTime += processes[i].turnaroundTime;
    }

    *avgWaitingTime = (float)totalWaitingTime / n;
    *avgTurnaroundTime = (float)totalTurnaroundTime / n;
}

void displayProcessDetails(struct Process processes[], int n)
{
    printf("Process\tArrival Time\tBurst Time\tCompletion Time\tWaiting Time\tTurnaround Time\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t%d\t\t%d\t\t%d\t\t%d\t\t%d\n", i + 1, processes[i].arrivalTime, processes[i].burstTime,
               processes[i].completionTime, processes[i].waitingTime, processes[i].turnaroundTime);
    }
}

void displayGanttChart(struct Process processes[], int n)
{
    int currentTime = 0;
    printf("\nGantt Chart:\n");

    for (int i = 0; i < n; i++)
    {
        printf("--------");
    }
    printf("\n");

    for (int i = 0; i < n; i++)
    {
        printf("|   P%d   ", i + 1);
    }
    printf("|\n");

    for (int i = 0; i < n; i++)
    {
        printf("--------");
    }
    printf("\n");

    for (int i = 0; i < n; i++)
    {
        printf("%d       ", currentTime);
        currentTime = processes[i].completionTime;
    }
    printf("%d\n", currentTime);

    for (int i = 0; i < n; i++)
    {
        printf("--------");
    }
    printf("\n");
}

int main()
{
    int n;
    struct Process processes[MAX_PROCESSES];
    float avgWaitingTime, avgTurnaroundTime;

    printf("Enter the number of processes: ");
    scanf("%d", &n);

    printf("Enter arrival time and burst time for each process:\n");
    for (int i = 0; i < n; i++)
    {
        printf("Process %d:\n", i + 1);
        printf("Arrival Time: ");
        scanf("%d", &processes[i].arrivalTime);
        printf("Burst Time: ");
        scanf("%d", &processes[i].burstTime);
    }

    calculateCompletionTime(processes, n);
    calculateWaitingTime(processes, n);
    calculateTurnaroundTime(processes, n);
    calculateAverageTimes(processes, n, &avgWaitingTime, &avgTurnaroundTime);

    displayProcessDetails(processes, n);
    printf("Average Waiting Time: %.2f\n", avgWaitingTime);
    printf("Average Turnaround Time: %.2f\n", avgTurnaroundTime);

    displayGanttChart(processes, n);

    return 0;
}
