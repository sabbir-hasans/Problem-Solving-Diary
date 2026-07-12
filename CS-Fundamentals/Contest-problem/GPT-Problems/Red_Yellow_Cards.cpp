#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int R, Y;
        cin >> R >> Y;

        cout << max(R, Y / 2) << endl;
    }

    return 0;
}