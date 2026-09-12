#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    set<string> names;

    while (n--)
    {
        string s;
        cin >> s;

        auto name = names.find(s);

        if (name != names.end())
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
            names.insert(s);
        }
    }

    return 0;
}