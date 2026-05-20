#include<stdio.h>
int main()
{ 
    int a;
    scanf("%d", &a);
    for (int i = 8; i <= a; i=i+8)
    {
        printf("%d\n", i);
    }
    return 0;
}

