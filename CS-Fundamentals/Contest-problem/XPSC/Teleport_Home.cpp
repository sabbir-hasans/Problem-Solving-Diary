#include<bits/stdc++.h>
using namespace std;
int main()
{
    int d, t;
    cin >> d >> t;

    int telepot = d -t;
    int walk = max(0,telepot);
    cout << walk << endl;
    return 0;
}