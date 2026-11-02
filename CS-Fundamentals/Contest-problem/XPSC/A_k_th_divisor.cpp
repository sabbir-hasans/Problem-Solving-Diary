#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, k;
    cin >> n >> k;

    long long limit = (long long)sqrtl(n);
    long long count = 0;

    for (int i = 1; i <= limit; i++)
    {
        if (n % i == 0)
        {
            count++;

            if (count == k)
            {
                cout << i << '\n';
                return 0;
            }
        }
    }

    for (int i = limit; i >= 1; i--)
    {
        if (n % i == 0 && i != n / i)
        {
            count++;

            if (count == k)
            {
                cout << n / i << '\n';
                return 0;
            }
        }
    }
    cout << -1 << '\n';
    return 0;
}
