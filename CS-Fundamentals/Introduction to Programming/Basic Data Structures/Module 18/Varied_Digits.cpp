#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin >> x;

    int first = x/10;
    int second = x % 10;

    if (first != second)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
    return 0;
}