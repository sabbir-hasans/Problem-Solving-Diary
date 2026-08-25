#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int tc;
    cin >> tc;

    while (tc--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        int z = 0, o = 0, tot = count(s.begin(), s.end(), '1');
        for (int i = 0; i < k; i++)
        {
            z += s[i] == '0';
            o += s[i] == '1';
        }

        int ans = tot;
        int l = 0, r = k - 1;
        while (r < n)
        {
            ans = max(ans, tot - o + z);
            z -= (s[l] == '0');
            o -= (s[l] == '1');
            if (r + 1 < n)
            {
                z += (s[r + 1] == '0');
                o += (s[r + 1] == '1');
            }
            l++, r++;
        }
        cout << ans << endl;
    }
    return 0;
}