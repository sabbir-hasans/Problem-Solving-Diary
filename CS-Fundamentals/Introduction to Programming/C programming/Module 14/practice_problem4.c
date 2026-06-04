#include<stdio.h>
char small_to_capital(char ch)
{
    return ch - 32;
} 

int main()
{
    char ch;
    scanf("%c", &ch);

    char capital = small_to_capital(ch);
    printf("%c\n", capital);
    return 0;
}