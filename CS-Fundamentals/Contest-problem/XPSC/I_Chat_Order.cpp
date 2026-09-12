#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d", &n);

    static char names[200005][11];

    for (int i = 0; i < n; i++)
    {
        scanf("%s", names[i]);
    }

    unordered_map<string, bool> seen;
    static char result[200005][11];
    int resultTop = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        string cur = names[i];
        if (!seen[cur])
        {
            seen[cur] = true;

            strcpy(result[resultTop], names[i]);
            resultTop++;
        }
    }
    for (int i = 0; i < resultTop; i++)
    {
        printf("%s\n", result[i]);
    }

    return 0;
}