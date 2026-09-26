#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    long long x;
    cin >> n >> x;

    vector<long long> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    map<long long, int> mp;

    for (int i = 0; i < n; i++)
    {
        long long need = x - a[i];
        if (mp.count(need))
        {
            cout << mp[need] + 1 << " " << i + 1 << endl;
            return 0;
        }
        mp[a[i]] = i;
    }
    cout << "IMPOSSIBLE" << endl;
    return 0;
}