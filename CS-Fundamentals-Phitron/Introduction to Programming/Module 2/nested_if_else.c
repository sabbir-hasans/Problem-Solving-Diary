
#include<stdio.h>
int main()
{
    int tk;
    scanf("%d", &tk);
    if (tk>=5000)
    {
        printf("Cox's Bazar jabo\n");
        if (tk >= 10000)
        {
            /* code */
            printf(" saint Martin jabo\n");
        }
        else
        {
            printf("saint Martin jabo na\n");
        }
    }
    else
    {
        printf("Kothaw jabo na\n");
    }
    return 0;
}