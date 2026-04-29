#include<stdio.h>
int main()
{
    //Array 1
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }

    //array 2
    int m;
    scanf("%d",&m);
    int b[m];
    for (int i = 0; i < m; i++)
    {
        scanf("%d",&b[i]);
    }

    //Array 1 + array 2
    int c[n+m];
    for (int i = 0; i < n; i++)
    {
        c[i] = a[i]; // a array copy to c
    }
    for (int i = 0; i < m; i++)
    {
        c[i+n] = b[i]; // b array copy to c
    }

    //print array
    for (int i = 0; i < n+m; i++)
    {
        printf("%d ",c[i]);
    }
    
    
    return 0;
}