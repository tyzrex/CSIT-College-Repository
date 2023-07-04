#include <stdio.h>

int present(int a[], int nf, int page, int rf_bit[])
{
    for (int i = 0; i < nf; i++)
    {
        if (a[i] == page)
        {
            rf_bit[i] = 1;
            return 1;
        }
    }
    return 0;
}

void printtable(int table_frame[], int nf)
{
    for (int i = 0; i < nf; i++)
    {
        if (table_frame[i] == -1)
            printf("-- ");
        else
            printf("%2d ", table_frame[i]);
    }
    printf("||");
}

int main()
{
    int nf;
    printf("Enter the number of frames: ");
    scanf("%d", &nf);
    int a[nf], rf_bit[nf];
    for (int i = 0; i < nf; i++)
    {
        a[i] = -1;
        rf_bit[i] = 0;
    }

    int np;
    printf("Enter the number of pages: ");
    scanf("%d", &np);
    int b[np];
    printf("Enter the page requests:\n");
    for (int i = 0; i < np; i++)
    {
        scanf("%d", &b[i]);
    }
    int pos = 0, count1 = 0;

    for (int i = 0; i < np; i++)
    {
        printf("Page table after request from %2d || ", b[i]);
        if (!present(a, nf, b[i], rf_bit))
        {
            pos = (pos + 1) % nf;
            while (rf_bit[pos] == 1)
            {
                rf_bit[pos] = 0;
                pos = (pos + 1) % nf;
            }

            a[pos] = b[i];
            printtable(a, nf);
            printf("Page fault\n");
            count1++;
            continue;
        }

        printtable(a, nf);
        printf("\n");
    }

    printf("\nNumber of page faults: %d\n\n", count1);
    return 0;
}
