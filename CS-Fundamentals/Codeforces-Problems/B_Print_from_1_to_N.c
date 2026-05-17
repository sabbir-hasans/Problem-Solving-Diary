#include <stdio.h>
int N;
void hello(int i)
{
    if (i > N)
    {
        return;
    }
    printf("%d\n", i);
    hello(i + 1);
}

int main()
{
    // int N;
    scanf("%d", &N);
    hello(1);
    return 0;
}