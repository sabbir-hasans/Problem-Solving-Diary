#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, a, b, p, q;
    cin >> n >> a >> b >> p >> q;

    long long red = n / a;
    long long blue = n / b;
    long long lcm = (a / gcd(a, b)) * b;
    long long common = n / lcm;
    long long ans = red * p + blue * q - common * min(p, q);

    cout << ans << '\n';
    return 0;
}