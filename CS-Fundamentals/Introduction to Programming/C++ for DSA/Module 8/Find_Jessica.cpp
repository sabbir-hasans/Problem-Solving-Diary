#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);

    stringstream ss(s);
    string name;
    int found = 0;

    while (ss >> name)
    {
        if (name == "Jessica")
        {
            found = 1;
            break;
        }
    }

    if (found == 1)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}