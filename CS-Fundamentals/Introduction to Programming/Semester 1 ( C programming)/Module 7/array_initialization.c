#include<stdio.h>
int main()
{
    int x; // declare
    int y = 10; // declare and initialize
    int a[5] = {10,20,30,40,50}; // declare and initialize
    // int b[] = {10,20,30,40,50}; // declare and initialize > array => a and b => both are same
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }
    
    return 0;
}