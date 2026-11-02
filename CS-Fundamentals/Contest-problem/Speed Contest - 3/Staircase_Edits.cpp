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

        map<int, int> mp;
        int Cnt = 0;

        for (int i = 0; i < n; i++)
        {
            int num;
            cin >> num;
            int diffCnt = ++mp[num - i];
            Cnt = max(Cnt, diffCnt);
        }
        int edits = n - Cnt;
        cout << edits << endl;
    }
    return 0;
}