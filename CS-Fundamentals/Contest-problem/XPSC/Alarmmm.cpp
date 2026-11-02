#include <bits/stdc++.h>
using namespace std;

int solve(int n, int k, string s)
{
    int ans = 0;
    int i = n - 1;

    while (i >= 0)
    {
        if (s[i] == '1')
        {
            ans++;
            i = i - k - 1;
        }
        else
        {
            i--;
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
        int n, k;
        string s;

        cin >> n >> k >> s;

        cout << solve(n, k, s) << '\n';
    }
    return 0;
}
