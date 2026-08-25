#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    long long sum = 0;
    long long smallestOdd = LLONG_MAX;

    int i = 0;

    while (i < n)
    {
        long long x;
        cin >> x;

        sum += x;

        if (x % 2 != 0)
        {
            if (x < smallestOdd)
            {
                smallestOdd = x;
            }
        }

        i++;
    }

    // No integer is selected
    if (sum == 0)
    {
        cout << 0 << endl;
    }
    // Sum is already even
    else if (sum % 2 == 0)
    {
        cout << sum << endl;
    }
    // Sum is odd
    else
    {
        sum = sum - smallestOdd;

        if (sum % 2 == 0)
        {
            cout << sum << endl;
        }
    }

    return 0;
}