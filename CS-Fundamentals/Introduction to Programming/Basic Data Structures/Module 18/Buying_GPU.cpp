#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int x,y,z;
        cin >> x >> y >> z;

        if (z <= y)
        {
            cout << -1 << endl;
            continue;
        }

        int price = x;
        int coins = 0;
        int month = 0;

        while (coins < price)
        {
            price += y;
            coins += z;
            month++;
        }
        cout << month << endl;
    }
    return 0;
}