#include<stdio.h>
int main()
{
    int T;
    scanf("%d", &T);
    while (T--)
    {
        int N;
        scanf("%d", &N);
        long long int fac = 1;
        for (int i = 1; i <= N; i++)
        {
            fac = fac * i;
        }
        printf("%lld\n", fac);
    }
    return 0;
}