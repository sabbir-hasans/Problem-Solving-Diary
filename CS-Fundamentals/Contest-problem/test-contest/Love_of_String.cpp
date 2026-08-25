#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;

    string s;
    cin >> s;

    string ans = s;

    for (int i = 0; i <= n - k; i++)
    {
        string duplicate_string = s;

        sort(duplicate_string.begin() + i, duplicate_string.begin() + i + k);

        if (duplicate_string < ans)
        {
            ans = duplicate_string;
        }
    }

    cout << ans << endl;
    return 0;
}