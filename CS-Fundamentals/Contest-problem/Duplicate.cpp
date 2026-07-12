// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;

//     int a[100005];

//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             if (a[i] == a[j])
//             {
//                 cout << "YES";
//                 return 0;
//             }
//         }
//     }

//     cout << "NO";
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    for (int i = 1; i < n; i++)
    {
        if (v[i] == v[i - 1])
        {
            cout << "YES";
            return 0;
        }
    }

    cout << "NO";

    return 0;
}