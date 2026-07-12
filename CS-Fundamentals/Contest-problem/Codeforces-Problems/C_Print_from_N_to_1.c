#include <stdio.h>

void hello(int i)
{
    if (i == 0)
    {
        return;
    }
    if (i == 1)
    {
        printf("%d", i);
    }
    else
    {
        printf("%d ", i);
    }
    hello(i - 1);
}

int main()
{
    int N;
    scanf("%d", &N);
    hello(N);
    return 0;
}