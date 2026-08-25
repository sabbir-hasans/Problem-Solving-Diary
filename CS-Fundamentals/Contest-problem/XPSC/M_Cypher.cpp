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

        int a[n];

        // Final digits input
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        // Each wheel
        for (int i = 0; i < n; i++)
        {
            int b;
            string s;

            cin >> b >> s;

            // Check every move
            for (int j = 0; j < b; j++)
            {
                if (s[j] == 'D')
                {
                    a[i]++;

                    if (a[i] == 10)
                    {
                        a[i] = 0;
                    }
                }
                else if (s[j] == 'U')
                {
                    a[i]--;

                    if (a[i] == -1)
                    {
                        a[i] = 9;
                    }
                }
            }
        }

        // Final answer
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }

        cout << endl;
    }

    return 0;
}