#include <stdio.h>
void Recursion(int N)
{
    if (N == 0)
    {
        return;
    }
    printf("I love Recursion\n");
    Recursion(N - 1);
}
int main()
{
    int N;
    scanf("%d", &N);

    Recursion(N);
    return 0;
}