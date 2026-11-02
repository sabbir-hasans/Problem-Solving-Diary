#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int x0, y0, r;
        cin >> x0 >> y0 >> r;

        int dx = r;
        int dy = 0;

        int x = x0 + dx;
        int y = y0 + dy;

        cout << x << " " << y << endl;
    }
    return 0;
}