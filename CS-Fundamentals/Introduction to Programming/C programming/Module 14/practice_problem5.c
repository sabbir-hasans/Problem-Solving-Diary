#include <stdio.h>
char capital_to_small(char ch)
{
    return ch + 32;
}

int main()
{
    char ch;
    scanf("%c", &ch);

    char capital = capital_to_small(ch);
    printf("%c\n", capital);
    return 0;
}