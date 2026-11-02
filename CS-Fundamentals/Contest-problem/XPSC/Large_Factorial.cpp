#include <bits/stdc++.h>
using namespace std;
const long long MOD = 1000000007;

void precompute(long long f[])
{
    f[0] = 1;

    for (int i = 1; i <= 1000; i++)
    {
        f[i] = (f[i - 1] * i) % MOD;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long f[1001];
    precompute(f);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        cout << f[n] << '\n';
    }
    return 0;
}
