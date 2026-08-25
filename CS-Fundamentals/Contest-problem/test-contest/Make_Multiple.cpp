#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        if (n % 3 == 0)
        {
            cout << 0 << endl;
        }
        else
        {
            int mult_by_5 = n + (5 - n % 5);

            if ((n + 1) % 3 == 0 || mult_by_5 % 3 == 0)
            {
                cout << 1 << endl;
            }
            else
            {
                cout << 2 << endl;
            }
        }
    }

    return 0;
}