#include<stdio.h>
int main()
{
    int arr[10];
    arr[2] = 10;
    arr[3] = 20;
    arr[1] = 50;

    printf("%d", arr[2]);
    printf("%d", arr[3]);
    printf("%d", arr[1]);
    return 0;
}