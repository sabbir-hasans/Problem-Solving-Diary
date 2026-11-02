#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, s;
        cin >> n >> s;

        vector<int> a(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int left = 0;
        int sum = 0;
        int maxLength = 0;

        for (int i = 0; i < n; i++)
        {

            sum = sum + a[i];
            while (sum > s)
            {
                sum = sum - a[left];
                left++;
            }

            if (sum == s)
            {
                int currentLength = i - left + 1;
                if (currentLength > maxLength)
                {
                    maxLength = currentLength;
                }
            }
        }

        if (maxLength == 0)
        {
            cout << -1 << endl;
        }
        else
        {
            int operations = n - maxLength;
            cout << operations << endl;
        }
    }
    return 0;
}