#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int n, s;
        cin >> n >> s;

        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int count = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                for (int k = j + 1; k < n; k++)
                {
                    if (a[i] + a[j] + a[k] == s)
                    {
                        count++;
                    }
                }
            }
        }

        if (count > 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}