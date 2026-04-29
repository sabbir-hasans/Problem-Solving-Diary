#include<stdio.h>
#include<string.h>
int main()
{
    char S[1000001];
    scanf("%s", S);
    // printf("%s", S);

    int num_of_con = 0;

    for (int i = 0; S[i] != '\0'; i++)
    {
        if (S[i] != 'a' && S[i] != 'e' && S[i] != 'i' && S[i] != 'o' && S[i] != 'u')
        {
            num_of_con++;
        }
    }
    printf("%d", num_of_con);
    
    return 0;
}