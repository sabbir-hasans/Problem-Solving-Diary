#include <bits/stdc++.h>
using namespace std;
#define ll long long
const long long MOD = 1000000007;


ll power(ll a, ll b)
{
    if (b == 0)
    {
        return 1;
    }

    ll half = power(a, b / 2);
    ll result = (half * half) % MOD;

    if (b % 2 == 1)
    {
        result = (result * a) % MOD;
    }
    return result;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        ll a, b;
        cin >> a >> b;

        a = a % MOD;

        cout << power(a, b) << '\n';
    }
    return 0;
}
