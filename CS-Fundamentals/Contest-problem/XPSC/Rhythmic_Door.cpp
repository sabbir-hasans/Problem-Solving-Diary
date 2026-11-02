#include <bits/stdc++.h>
using namespace std;

int solve(string s)
{
    int n = s.size();
    int ans = 0;
    int i = 0;

    while (i < n)
    {
        if (i + 2 < n)
        {
            if (s[i] == s[i + 1] && s[i + 1] == s[i + 2])
            {
                ans++;
                i += 3;
            }
            else
            {
                i++;
            }
        }
        else
        {
            i++;
        }
    }
    return ans;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        string s;

        cin >> n >> s;

        cout << solve(s) << '\n';
    }
    return 0;
}
