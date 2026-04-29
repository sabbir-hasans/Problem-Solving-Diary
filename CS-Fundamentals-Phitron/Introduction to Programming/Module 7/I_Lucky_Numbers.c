#include<stdio.h>
int main()
{
    int x;
    scanf("%d", &x);
    int firstDigit = x / 10;
    int lastDigit = x % 10;

    if ((lastDigit != 0 && firstDigit % lastDigit == 0) ||
        (firstDigit != 0 && lastDigit % firstDigit == 0))
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    
    return 0;
}