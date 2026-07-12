#include <stdio.h>
#include <stdlib.h>

int main()
{
    int T;
    scanf("%d", &T);

    while (T--)
    {
        int N;
        scanf("%d", &N);
        int A[N], B[N], C[N];

        // input A array
        for (int i = 0; i < N; i++)
        {
            scanf("%d", &A[i]);
        }

        // copy from A array to B array
        for (int i = 0; i < N; i++)
        {
            B[i] = A[i];
        }

        // sorting B array ascending order
        for (int i = 0; i < N - 1; i++)
        {
            for (int j = i + 1; j < N; j++)
            {
                if (B[i] > B[j])
                {
                    int temp = B[i];
                    B[i] = B[j];
                    B[j] = temp;
                }
            }
        }

        // calculate absolute difference
        for (int i = 0; i < N; i++)
        {
            C[i] = abs(A[i] - B[i]);
        }

        // print C array
        for (int i = 0; i < N; i++)
        {
            printf("%d ", C[i]);
        }
        printf("\n");
    }
    return 0;
}