#include<stdio.h>
int main()
{
    float P, R, T, I;
    scanf("%f %f %f", &P, &R, &T);
    I = (P*R*T)/100;
    printf("%f", I);
    return 0;
}