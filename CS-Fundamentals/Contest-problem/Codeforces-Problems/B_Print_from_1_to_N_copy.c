#include <stdio.h>

void hello(int i, int N)
{
    if (i > N)
    {
        return;
    }
    printf("%d\n", i);
    hello(i + 1, N);
}

int main()
{
    int N;
    scanf("%d", &N);
    hello(1, N);
    return 0;
}