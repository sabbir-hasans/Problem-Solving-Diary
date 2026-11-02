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

        vector<long long> a(n + 1);

        for (int i = 1; i <= n; i++)
            cin >> a[i];

        int m = n - 4;

        vector<long long> value(m + 1);
        map<long long, int> freq;

        for (int x = 1; x <= m; x++)
        {
            value[x] = a[x] + a[x + 2] - a[x + 4];
            freq[value[x]]++;
        }

        long long ans = 0;
        for (auto x : freq)
        {
            long long k = x.second;
            ans += k * (k - 1) / 2;
        }

        for (int x = 1; x <= m; x++)
        {
            if (x + 2 <= m && value[x] == value[x + 2])
                ans--;

            if (x + 4 <= m && value[x] == value[x + 4])
                ans--;
        }
        cout << ans << endl;
    }
    return 0;
}