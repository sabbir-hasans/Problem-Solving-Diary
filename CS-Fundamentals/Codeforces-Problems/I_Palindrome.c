#include<stdio.h>
#include<string.h>
int main()
{
    char s[1005];
    scanf("%s", s);

    int len = strlen(s);
    int flag = 1;
    for (int i = 0, j = len - 1; i < j; i++, j--)
    {
        if (s[i] != s[j])
        {
            flag = 0;
            printf("NO");
            break;
        }
        
    }
    if (flag == 1)
    {
        printf("YES");
    }
    return 0;
}