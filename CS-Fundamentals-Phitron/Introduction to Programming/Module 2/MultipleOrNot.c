#include <stdio.h>
int main()
{
    int a, b, m1, m2;
    scanf("%d %d", &a, &b);
    m1 = a % b == 0;
    m2 = b % a == 0;
    if (m1 || m2)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    return 0;
}