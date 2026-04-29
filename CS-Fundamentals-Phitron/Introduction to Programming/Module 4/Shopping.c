#include <stdio.h>
int main()
{
    int N, A; // A = reduced from 1000
    scanf("%d", &N);
    if (N <= 1000)
    {
        printf("Bad luck!\n");
    }
    else if (N > 1000)
    {
        printf("I will buy Punjabi\n");
        A = N - 1000;
        // printf("%d\n", A);
        if (A >= 500)
        {
            printf("I will buy new shoes\n");
            printf("Alisa will buy new shoes\n");
        }
    }
    // else
    // {
    //     printf("Bad luck!\n");
    // }

    return 0;
}