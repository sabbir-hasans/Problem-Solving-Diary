#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<long long> a(n);
    for (auto &x : a)
        cin >> x;

    const long long mx = *max_element(a.begin(), a.end());

    long long z = 0;
    for (auto x : a)
        z = gcd(z, mx - x);

    long long y = 0;
    for (auto x : a)
        y += (mx - x) / z;

    cout << y << " " << z << '\n';
    return 0;
}