#include<stdio.h>
int main()
{
    int n, sum1 = 0, sum2 = 0;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i <= n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        // printf("%d ", arr[i]);
        if (arr[i] > 0)
        {
            // printf("%d ", arr[i]);
            sum1 += arr[i];
        }
        else if (arr[i] < 0)
        {
            // printf("%d ", arr[i]);
            sum2 += arr[i];
        }
        
    }
    printf("%d %d", sum1, sum2);
    return 0;
}