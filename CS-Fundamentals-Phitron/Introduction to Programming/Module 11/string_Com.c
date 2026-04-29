#include<stdio.h>
#include<string.h>
int main()
{
    char a[101], b[101];
    scanf("%s %s", &a, &b);

    int x = strcmp(a,b);
    // printf("%d", strcmp(a, b));
    printf("%d", x);
    return 0;
}