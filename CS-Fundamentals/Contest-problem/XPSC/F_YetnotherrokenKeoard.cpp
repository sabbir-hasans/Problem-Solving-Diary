#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        char s[1000005];
        char ans[1000005];

        int lower[1000005];
        int upper[1000005];

        int len = 0;
        int lowerTop = 0;
        int upperTop = 0;

        scanf("%s", s);

        int n = strlen(s);

        for (int i = 0; i < n; i++)
        {
            char c = s[i];

            // Lowercase backspace
            if (c == 'b')
            {
                if (lowerTop > 0)
                {
                    int idx = lower[lowerTop - 1];
                    ans[idx] = '*';
                    lowerTop--;
                }
            }

            // Uppercase backspace
            else if (c == 'B')
            {
                if (upperTop > 0)
                {
                    int idx = upper[upperTop - 1];
                    ans[idx] = '*';
                    upperTop--;
                }
            }

            // Normal character
            else
            {
                ans[len] = c;

                if (c >= 'a' && c <= 'z')
                {
                    lower[lowerTop] = len;
                    lowerTop++;
                }
                else
                {
                    upper[upperTop] = len;
                    upperTop++;
                }

                len++;
            }
        }

        // Print characters that were not deleted
        for (int i = 0; i < len; i++)
        {
            if (ans[i] != '*')
            {
                printf("%c", ans[i]);
            }
        }

        printf("\n");
    }

    return 0;
}