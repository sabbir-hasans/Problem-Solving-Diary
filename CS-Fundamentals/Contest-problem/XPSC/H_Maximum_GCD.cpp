#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    vector<int> n(t);

    for (int &x : n)
    {
        cin >> x;
    }

    for (int x : n)
    {
        cout << x / 2 << '\n';
    }
    return 0;
}
