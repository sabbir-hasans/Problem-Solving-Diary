#include <stdio.h>
#include <string.h>

int is_palindrome(char S[])
{
    int len = strlen(S);
    int flag = 1;
    for (int i = 0, j = len - 1; i < j; i++, j--)
    {
        if (S[i] != S[j])
        {
            flag = 0;
            return 0;
            break;
        }
    }
    if (flag == 1)
    {
        return 1;
    }
    return 0;
}

int main()
{
    char S[1001];
    scanf("%s", S);
    int status_palindrome = is_palindrome(S);
    if (status_palindrome == 1)
    {
        printf("Palindrome\n");
    }
    else
    {
        printf("Not Palindrome\n");
    }
    return 0;
}