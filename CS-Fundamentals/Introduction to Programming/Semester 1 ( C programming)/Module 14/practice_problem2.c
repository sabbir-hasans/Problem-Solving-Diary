#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", a[i]);
    }
    
    int star = 2*n-1;
    int space = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < space; j++)
        {
            printf(" ");
        }
        for (int k = 0; k < star; k++)
        {
            printf("*");
        }
        printf("\n");
        star -= 2;
        space++;
    }
    
    return 0;
}