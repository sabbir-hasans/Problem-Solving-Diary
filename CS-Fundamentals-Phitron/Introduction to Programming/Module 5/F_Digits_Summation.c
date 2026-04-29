#include<stdio.h>
int main()
{
    long long int N, M;
    int sum = 0;
    scanf("%lld %lld", &N, &M);
    int last_num1 = N % 10;
    int last_num2 = M % 10;
    sum = last_num1 + last_num2;
    printf("%d\n", sum);
    return 0;
}