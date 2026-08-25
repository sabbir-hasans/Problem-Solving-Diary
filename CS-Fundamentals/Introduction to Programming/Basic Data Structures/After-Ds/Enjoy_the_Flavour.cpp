#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }

        long long ans = 2e18;

        for (int i = 0; i < n; ++i)
        {
            long long s1 = 0, s2 = 0;
            for (int j = 0; j <= i; ++j)
                s1 += a[j];
            for (int j = i + 1; j < n; ++j)
                s2 += a[j];
            long long d = abs(s1 - s2);
            ans = min(ans, d);
        }
        cout << ans << endl;
    }
    return 0;
}

// #include <iostream>
// #include <algorithm>
// using namespace std;


// brout forces 
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         int a[n];
//         for (int i = 0; i < n; i++)
//         {
//             cin >> a[i];
//         }
//         long long ans = -1e18;
//         for (int i = 0; i < n; ++i)
//         {
//             // i ke positive rakhbo
//             long long cursum = 0;
//             for (int j = 0; j < n; j++)
//             {
//                 if (i == j)
//                 {
//                     cursum += a[j];
//                 }
//                 else
//                 {
//                     cursum -= a[j];
//                 }
//             }
//             ans = max(ans, cursum);
//         }
//         cout << ans << endl;
//     }
//     return 0;
// }