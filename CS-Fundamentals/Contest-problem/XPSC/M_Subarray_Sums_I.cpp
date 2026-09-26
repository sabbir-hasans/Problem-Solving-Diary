#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    long long x;
    cin >> n >> x;

    map<long long, long long> mp;

    mp[0] = 1;

    long long sum = 0;
    long long ans = 0;

    for (int i = 0; i < n; i++)
    {
        long long a;
        cin >> a;
        sum += a;
        long long need = sum - x;
        ans += mp[need];
        mp[sum]++;
    }
    cout << ans << endl;
    return 0;
}