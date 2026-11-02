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

        vector<int> a(n);
        for (auto &x : a)
            cin >> x;

        int cnt = min(n, k + 1);
        int sum = 0;

        while (cnt--)
        {
            int pos = max_element(a.begin(), a.end()) - a.begin();
            int mx = a[pos];

            sum += a[pos];
            a[pos] = -1;
        }
        cout << sum << '\n';
    }
    return 0;
}