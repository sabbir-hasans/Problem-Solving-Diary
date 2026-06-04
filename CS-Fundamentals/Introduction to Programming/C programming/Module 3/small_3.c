#include<stdio.h>
int main()
{
    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);
    if (A <= B && A <= C)
    {
        printf("%d small", A);
    }else if (B <= A && B <= C)
    {
        printf("%d small", B);
    }else{
        printf("%d samall", C);
    }
    return 0;
}