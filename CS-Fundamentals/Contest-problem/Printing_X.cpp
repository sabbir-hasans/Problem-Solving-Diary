// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;

//     int mid = n / 2;

//     for (int i = 0; i < n; i++)
//     {
//         if (i == mid)
//         {
//             for (int j = 0; j < mid; j++)
//                 cout << " ";

//             cout << "X";
//         }
//         else if (i < mid)
//         {
//             for (int j = 0; j < i; j++)
//                 cout << " ";

//             cout << "\\";

//             for (int j = 0; j < n - 2 * i - 2; j++)
//                 cout << " ";

//             cout << "/";
//         }
//         else
//         {
//             int x = n - i - 1;

//             for (int j = 0; j < x; j++)
//                 cout << " ";

//             cout << "/";

//             for (int j = 0; j < 2 * (i - mid) - 1; j++)
//                 cout << " ";

//             cout << "\\";
//         }

//         cout << endl;
//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int mid = n / 2;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j && i != mid)
            {
                cout << "\\";
            }
            else if (i + j == n - 1 && i != mid)
            {
                cout << "/";
            }   
            else if (i == mid && j == mid)
            {
                cout << "X";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
