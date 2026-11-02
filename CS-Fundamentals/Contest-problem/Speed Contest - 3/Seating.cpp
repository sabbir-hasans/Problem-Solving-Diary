#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, m, k;
        cin >> n >> m >> k;

        vector<int> a(m);
        for (int i = 0; i < m; i++)
        {
            cin >> a[i];
        }

        int i = 0;
        int seat = 1;

        while (k > 0)
        {
            if (i < m && seat == a[i])
            {
                i++;
                seat++;
            }
            else
            {
                cout << seat << " ";
                k--;
                seat++;
            }
        }
        cout << endl;
    }
    return 0;
}