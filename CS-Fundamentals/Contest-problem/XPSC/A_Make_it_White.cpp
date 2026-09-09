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

        string s;
        cin >> s;

        int start = -1;
        int end = -1;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'B')
            {
                start = i;
                break;
            }
        }

        for (int i = n - 1; i >= 0; i--)
        {
            if (s[i] == 'B')
            {
                end = i;
                break;
            }
        }

        cout << end - start + 1 << endl;
    }

    return 0;
}