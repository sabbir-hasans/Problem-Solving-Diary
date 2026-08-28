#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        string s;
        cin >> s;

        int freq[26] = {0};

        for (int i = 0; i < n; i++)
        {
            freq[s[i] - 'a']++;
        }

        int cnt = 0;

        for (int i = 0; i < 26; i++)
        {
            if (freq[i] % 2 != 0)
            {
                cnt++;
            }
        }

        //cnt == k
        if (cnt == k)
        {
            cout << "YES" << endl;
        }

        //cnt > k
        else if (cnt > k)
        {
            if (cnt - k <= 1)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }

        // cnt < k
        else
        {
            if (k < n && cnt <= k + 1)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}