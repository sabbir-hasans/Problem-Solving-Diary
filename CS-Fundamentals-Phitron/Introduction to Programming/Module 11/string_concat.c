#include <stdio.h>
#include <string.h>
int main()
{
    char a[101], b[101];
    scanf("%s %s", &a, &b);
    // printf("%s %s", a, b);

    int lengthA = strlen(a);
    int lengthB = strlen(b);
    for (int i = 0; i <= lengthB; i++)
    {
        a[i+lengthA] = b[i];
    }
    printf("%s", a);

    return 0;
}