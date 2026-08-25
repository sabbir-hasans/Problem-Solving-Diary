#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;

    while (s.length() < 4)
    {
        s = "0" + s;
    }
    cout << s << endl;

    return 0;
}