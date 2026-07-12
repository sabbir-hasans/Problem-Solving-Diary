#include <stdio.h>
int main()
{
    int N, M; // N = row, M = column
    scanf("%d %d", &N, &M);

    int arr[N][M];
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            scanf("%d", &arr[i][j]); // array matrix input
        }
    }

    // print last row
    int last_row = N - 1;
    for (int i = 0; i < M; i++)
    {
        printf("%d ", arr[last_row][i]);
    }

    printf("\n");

    // print last column
    int last_column = M - 1;
    for (int i = 0; i < N; i++)
    {
        printf("%d ", arr[i][last_column]);
    }

    return 0;
}