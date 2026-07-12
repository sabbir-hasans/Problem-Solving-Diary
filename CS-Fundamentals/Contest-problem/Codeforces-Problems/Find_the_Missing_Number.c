#include<stdio.h>
int main()
{
    int T;
    scanf("%d", &T);

    while (T--)
    {
        long long int M, A, B, C, X, mul;
        scanf("%lld %lld %lld %lld", &M, &A, &B, &C);
        mul = (A * B * C);
        if (M % mul == 0)
        {
            X = M / mul;
            printf("%lld\n", X);
        }
        else
        {
            printf("-1\n");
        }
    }
    
    return 0;
}