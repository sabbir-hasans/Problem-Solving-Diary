#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        long long A, B, C;
        cin >> A >> B >> C;

        if (C % 3 == 0 && B == 2 * A + C / 3)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }

    return 0;
}

// int t;
// cin >> t;
// while (t--)
// {
//     // input
//     int a, b, c;
//     cin >> a >> b >> c;

//     // attack - 2
//     while (c > 2 && b > 0)
//     {
//         c -= 3;
//         b -= 1;
//     }

//     // attack - 1
//     while (b > 1 && a > 0)
//     {
//         b -= 2;
//         a -= 1;
//     }

//     if (a == 0 && b == 0 && c == 0)
//         cout << "Yes\n";
//     else
//         cout << "No\n";
// }

// return 0;