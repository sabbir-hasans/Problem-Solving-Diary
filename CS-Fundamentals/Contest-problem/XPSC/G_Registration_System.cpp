#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;

    set<string> used;

    while (n--)
    {
        string s;
        cin >> s;

        if (used.find(s) == used.end())
        {
            used.insert(s);
            cout << "OK" << endl;
        }
        else
        {
            int i = 1;
            while (used.find(s + to_string(i)) != used.end())
            {
                i++;
            }
            string newName = s + to_string(i);
            used.insert(newName);
            cout << newName << endl;
        }
    }

    return 0;
}