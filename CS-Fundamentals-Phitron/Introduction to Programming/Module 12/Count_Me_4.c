#include<stdio.h>
#include<string.h>
int main()
{
    char S[10001];
    scanf("%s", S);
    // printf("%s", S);

    int cnt_alph[26] = {0};

    for (int i = 0; S[i] != '\0'; i++)
    {
        int alph_inx = S[i] - 'a';
        cnt_alph[alph_inx]++;
    }
    
    for (int i = 0; i < 26; i++)
    {
        char alph = i + 'a';
        if (cnt_alph[i] !=0)
        {
            printf("%c - %d\n", alph, cnt_alph[i]);
        }
        
    }
    return 0;
}