#include <stdio.h>
char ascii_to_char(int num)
{
    return num;
}
int main()
{
    int num;
    scanf("%d", &num);

    char asccii = ascii_to_char(num);
    printf("%c\n", asccii);
    return 0;
}