#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        int k;
        cin >> n >> k;
        int remaining = n % 4;
        if (k == 0)
            cout << (remaining == 0 ? "Off" : "On") << endl;
        else
            cout << (remaining == 0 ? "On" : "Ambiguous") << endl;
    }
    return 0;
}