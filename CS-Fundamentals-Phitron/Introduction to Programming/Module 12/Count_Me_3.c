#include<stdio.h>
#include<string.h>
int main()
{
    int T;
    scanf("%d", &T);
    
    char S[10001];
    for (int i = 0; i < T; i++)
    {
        scanf("%s", S);
        // printf("%s\n", S);
        int cap_alph = 0, sml_alph = 0, dig_alph = 0;
        for (int i = 0; S[i] != '\0'; i++)
        {
            if (S[i] >= 'A' && S[i] <= 'Z')
            {
                cap_alph++;
            }
            else if (S[i] >= 'a' && S[i] <= 'z')
            {
                sml_alph++;
            }
            else if (S[i] >= '0' && S[i] <= '9')
            {
                dig_alph++;
            }
        }
        printf("%d %d %d\n", cap_alph, sml_alph, dig_alph);
    }
    return 0;
}