#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    vector<int> a(n);
    vector<int> ans(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    vector<bool> seen(100005, false);
    int count = 0;

    for (int i = n - 1; i >= 0; i--)
    {
        if (!seen[a[i]])
        {
            seen[a[i]] = true;
            count++;
        }

        ans[i] = count;
    }

    while (m--)
    {
        int l;
        cin >> l;

        cout << ans[l - 1] << endl;
    }

    return 0;
}