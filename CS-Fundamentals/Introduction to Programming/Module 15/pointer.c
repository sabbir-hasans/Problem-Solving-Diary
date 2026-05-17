#include<stdio.h>
int main()
{
    int x = 100;
    printf("%d\n", x);
    printf("%p\n",&x);

    int * ptr; 
    ptr = &x;
    *ptr = 200;
    printf("%d\n",x);
    printf("%p", ptr);
    return 0;
}