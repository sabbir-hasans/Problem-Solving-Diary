#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int X, Y;
        cin >> X >> Y;

        int time = 0;

        while (X > Y)
        {
            time += (X + 9) / 10;
            X--;
        }

        cout << time << endl;
    }

    return 0;
}