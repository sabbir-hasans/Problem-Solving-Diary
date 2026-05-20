#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n]; //array initialize

    //array input
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    //array sum and print
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum =sum + a[i];
        // sum += a[i]; //same
    }
    printf("%d", sum);
    
    return 0;
}