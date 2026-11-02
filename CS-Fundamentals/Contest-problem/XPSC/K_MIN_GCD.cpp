#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<long long> a(n);

        for (auto &x : a)
            cin >> x;

        long long mn = *min_element(a.begin(), a.end());

        int cntMin = count(a.begin(), a.end(), mn);

        long long g = 0;

        for (long long x : a)
        {
            if (x != mn && x % mn == 0)
                g = gcd(g, x);
        }

        if (cntMin > 1 || g == mn)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}