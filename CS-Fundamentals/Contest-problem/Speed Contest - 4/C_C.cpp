#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int b,c;
        cin >> b >> c;

        int value = gcd(b , c);
        int a = c/value;
        cout << a << endl;
    }
    return 0;
}