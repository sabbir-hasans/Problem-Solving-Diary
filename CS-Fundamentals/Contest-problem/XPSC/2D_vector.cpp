#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    string s;

    // cin >> s;
    // cout << s << '\n';
    
    for (int i = 1; i <= n; i++)
    {
        char c;
        cin >> c;
        s.push_back(c);
    }
    cout << s << '\n';
    return 0;
}