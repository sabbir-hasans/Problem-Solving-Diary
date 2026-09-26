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

        int work = 0;
        for (int i = 0; work <= n; i++)
        {
            if (i % k != 0)
            {
                work++;
            }
            if (work == n)
            {
                cout << i << endl;
                break;
            }
        }
    }
    return 0;
}