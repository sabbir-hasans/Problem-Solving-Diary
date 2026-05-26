#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int A[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }

    int B[n];
    for (int j = 0; j < n; j++)
    {
        scanf("%d", &B[j]);
    }
    int sum = 0;
    for (int i = 0, j = n - 1; i < n; i++, j--)
    {
        sum = A[i] + B[j];
        printf("%d ", sum);
    }
    
    return 0;
}