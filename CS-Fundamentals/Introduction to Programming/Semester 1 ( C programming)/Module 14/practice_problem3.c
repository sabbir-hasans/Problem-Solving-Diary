#include<stdio.h>
int char_to_ascii(char ch) 
{
    return ch;
}
int main()
{
    char ch;
    scanf("%c", &ch);

    int asccii = char_to_ascii(ch);
    printf("%d\n", asccii);
    return 0;
}