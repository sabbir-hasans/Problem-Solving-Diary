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

        int position = n;
        int seconds = 0;
        while (position != 1 && position != 3)
        {
            position = (position == 2) ? 1 : position - 2;
            seconds++;
        }
        seconds++;
        cout << seconds << endl;
    }
    return 0;
}