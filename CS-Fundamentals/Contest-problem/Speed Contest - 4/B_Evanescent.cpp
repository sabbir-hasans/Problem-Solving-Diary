#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;

        int k = 1;

        for (int i = 1; i < n; i++)
        {
            if (s[i] != s[i - 1])
                k++;
        }

        int ans = k;

        for (int i = 1; i < n - 1; i++)
        {
            if (s[i] != s[i - 1] && s[i] != s[i + 1])
            {
                if (s[i - 1] == s[i + 1])
                    ans = k - 2;
                else
                    ans = min(ans, k - 1);
            }
        }
        cout << ans << '\n';
    }
    return 0;
}
