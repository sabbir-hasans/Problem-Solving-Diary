#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        string s;
        cin >> s;
        vector<int> prefix(n + 1, 0);
        for (int i = 0; i < n; i++)
        {
            prefix[i + 1] = prefix[i];
            if (s[i] == 'W')
                prefix[i + 1]++;
        }

        int ans = k;
        for (int i = 0; i <= n - k; i++)
        {
            int w = prefix[i + k] - prefix[i];
            ans = min(ans, w);
        }
        cout << ans << endl;
    }
    return 0;
}