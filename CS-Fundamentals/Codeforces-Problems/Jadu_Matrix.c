#include<stdio.h>
int main()
{
    int N,M;
    scanf("%d %d", &N, &M);

    int arr[N][M];
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            scanf("%d", &arr[i][j]); // array matrix input 
        }
    }

    if (N != M) // Square or not
    {
        printf("NO\n");
        return 0;
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            int primary = (i == j);
            int secondary = (i + j == N - 1);
            if (primary || secondary)
            {
                if (arr[i][j] != 1) // Diagonal check 1 or not
                {
                    printf("NO\n");
                    return 0;
                }
            }
            else
            {
                if (arr[i][j] != 0) // other cell check 
                {
                    printf("NO\n");
                    return 0;
                }
            }
            
        }
    }
    printf("YES\n");
    return 0;
}