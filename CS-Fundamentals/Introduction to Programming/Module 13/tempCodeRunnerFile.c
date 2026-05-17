#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int A[n];
    for (int i = 0; i < n; i++) //array input
    {
        scanf("%d", &A[i]);
    }
    int x;
    scanf("%d",&x);

    int flag = 0;
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (A[i] + A[j] == x)
            {
                flag = 1;
                printf("Yes\n");
            }
        } 
    }
    if (flag == 0)
    {
        printf("No\n");
    }
    
    return 0;
}