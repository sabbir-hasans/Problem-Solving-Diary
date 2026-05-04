#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int A[n];
    for (int i = 0; i < n; i++) // array input
    {
        scanf("%d", &A[i]);
    }

    int temp;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (A[i] < A[j]) // serial not ok
            {
                temp = A[j];
                A[j] = A[i];
                A[i] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++) // array print
    {
        printf("%d ", A[i]);
    }
    return 0;
}