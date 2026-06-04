#include <stdio.h>
#include <string.h>
int main()
{
    char s[1001];
    char t[1001];
    scanf("%s %s", &s, &t);

    int length1 = strlen(s);
    int length2 = strlen(t);

    printf("%d %d\n", length1, length2);
    printf("%s %s", s, t);

    return 0;
}