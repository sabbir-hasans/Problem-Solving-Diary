#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int a[3005];
        for (int i = 0; i < n; i++)
            cin >> a[i];

        for (int i = 0; i < n; i++)
        {
            for (int j = 1; j < n; j++)
            {
                if (a[j] < a[j - 1] &&
                    abs(a[j] - a[j - 1]) > 1)
                {
                    swap(a[j], a[j - 1]);
                }
            }
        }

        for (int i = 0; i < n; i++)
            cout << a[i] << " ";

        cout << '\n';
    }
    return 0;
}