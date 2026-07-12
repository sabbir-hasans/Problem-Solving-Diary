#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);

    stringstream ss(s);

    string word;
    int cnt = 0;

    while (ss >> word)
    {
        for (char &c : word)
        {
            c = tolower(c);
        }

        if (word == "phitron")
        {
            cnt++;
        }
    }

    cout << cnt << endl;
    return 0;
}