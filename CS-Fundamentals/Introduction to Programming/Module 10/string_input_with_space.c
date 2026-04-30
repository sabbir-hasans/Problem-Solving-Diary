#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d", &n);
    getchar();
    char s[n];
    // scanf("%s",&s);
    // gets(s);
    fgets(s, n, stdin);
    printf("%s", s);
    return 0;
}