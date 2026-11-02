#include <bits/stdc++.h>
using namespace std;
bool prime(int n)
{
    if (n < 2)
        return false;

    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main()
{
    int n, ans = 3;
    cin >> n;

    if (prime(n))
        ans = 1;
    else if (n % 2 == 0 || prime(n - 2))
        ans = 2;

    cout << ans << '\n';
    return 0;
}
