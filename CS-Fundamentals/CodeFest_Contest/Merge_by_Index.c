#include <stdio.h>
#include <string.h>

int main()
{
    char s1[2001], s2[1001];
    scanf("%s %s", s1, s2);

    int start, end;
    scanf("%d %d", &start, &end);

    int len = strlen(s1);
    for (int i = start; i <= end; i++)
    {
        s1[len] = s2[i];
        len++;
    }
    s1[len] = '\0';
    printf("%s\n", s1);

    return 0;
}