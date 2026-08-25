#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin >> x;

    int second = 9 - x;

    if (second >= 1 && second <= 6)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
    return 0;
}