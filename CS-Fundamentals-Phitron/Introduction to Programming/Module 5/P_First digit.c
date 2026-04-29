#include<stdio.h>
int main()
{
    int A, R; //R = Result
    scanf("%d", &A);
    R = A / 1000;
    if (R % 2 == 0)
    {
        printf("EVEN\n"); 
    }else{
        printf("ODD\n");
    }
    
    return 0;
}