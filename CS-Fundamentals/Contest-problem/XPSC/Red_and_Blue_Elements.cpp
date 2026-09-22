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

        sort(a.begin(), a.end());
        vector<long long> p(n + 1);
        for (int i = 0; i < n; i++)
            p[i + 1] = p[i] + a[i];

        long long ans = 0;
        for (int k = 1; k < n; k++)
        {
            long long red;
            if (k <= n / 2)
                red = p[n] - p[n - k];
            else
                red = p[k];
            long long blue = p[n] - red;
            ans = max(ans, red * (n - k) + blue * k);
        }
        cout << ans << '\n';
    }
    return 0;
}