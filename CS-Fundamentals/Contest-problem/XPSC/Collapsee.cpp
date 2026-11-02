#include <bits/stdc++.h>
using namespace std;

void findAnswer()
{
    int n;
    cin >> n;

    vector<long long> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    long long ans = a[n - 1] - a[n - 2];

    if (n > 2)
    {
        if (a[0] < 0)
            ans += -a[0];
        else
            ans += a[0];

        for (int i = 1; i < n - 2; i++)
        {
            if (a[i] < 0)
                ans += -a[i];
            else
                ans += a[i];
        }
    }
    cout << ans << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        findAnswer();
    }
    return 0;
}