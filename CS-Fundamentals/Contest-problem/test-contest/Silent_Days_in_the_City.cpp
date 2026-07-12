#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    long long a[100005];

    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    int silent[100005] = {0};

    for (int i = 2; i < n; i++)
    {
        if (a[i] < a[i - 1] && a[i] < a[i + 1])
        {
            silent[i] = 1;
        }
    }

    int prefix[100005] = {0};

    for (int i = 1; i <= n; i++)
    {
        prefix[i] = prefix[i - 1] + silent[i];
    }

    int q;
    cin >> q;

    while (q--)
    {
        int l, r;
        cin >> l >> r;

        cout << prefix[r] - prefix[l - 1] << "\n";
    }

    return 0;
}