#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int h = n / 2;
        string half = string(h - 1, '0') + "1"; 
        string mid = (n % 2) ? "0" : "";
        string rev = half;
        reverse(rev.begin(), rev.end());
        cout << half + mid + rev << "\n";
    }
    return 0;
}