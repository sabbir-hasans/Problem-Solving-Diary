#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    long long s;
    cin >> n >> s;

    vector<long long> a(n);

    for (auto &x : a)
        cin >> x;

    int r = 0;
    long long sum = 0, ans = 0;

    for (int l = 0; l < n; l++)
    {
        while (r < n && sum < s)
        {
            sum += a[r];
            r++;
        }

        if (sum >= s)
            ans += n - r + 1;
        sum -= a[l];
    }
    cout << ans << '\n';
    return 0;
}