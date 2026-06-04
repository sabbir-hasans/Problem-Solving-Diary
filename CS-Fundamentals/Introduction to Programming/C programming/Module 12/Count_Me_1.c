#include<stdio.h>
int main()
{
    // int N;
    // scanf("%d", &N);
    // int A[N];
    // for (int i = 0; i < N; i++)
    // {
    //     scanf("%d", &A[i]);
    //     // printf("%d ", A[i]);
    // }

    // int cnt_div_2 = 0, cnt_div_3 = 0; Orli$y26s@@
    // for (int i = 0; i < N; i++)
    // {
    //     if (A[i] % 2 == 0)
    //     {
    //         cnt_div_2++;
    //     }
    //     else if (A[i] % 3 == 0)
    //     {
    //         cnt_div_3++;
    //     }
    // }
    // printf("%d %d", cnt_div_2, cnt_div_3);

    int N;
    scanf("%d", &N);

    int count2 = 0, count3 = 0;

    for (int i = 0; i < N; i++)
    {
        int x;
        scanf("%d", &x);

        if (x % 2 == 0)
            count2++;
        else if (x % 3 == 0)
            count3++;
    }

    printf("%d %d\n", count2, count3);

    return 0;
}