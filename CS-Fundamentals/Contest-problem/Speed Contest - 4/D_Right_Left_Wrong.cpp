#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<long long> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        string s;
        cin >> s;

        vector<long long> p(n + 1, 0);

        for (int i = 0; i < n; i++)
        {
            p[i + 1] = p[i] + a[i];
        }

        int l = 0;
        int r = n - 1;
        long long ans = 0;

        while (l < r)
        {
            while (l < r)
            {
                if (s[l] == 'L')
                    break;
                l++;
            }

            while (l < r)
            {
                if (s[r] == 'R')
                    break;
                r--;
            }

            if (l >= r)
                break;

            ans += p[r + 1] - p[l];
            l++;
            r--;
        }
        cout << ans << endl;
    }
    return 0;
}