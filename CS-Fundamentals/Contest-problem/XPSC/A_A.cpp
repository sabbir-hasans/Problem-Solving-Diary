#include <bits/stdc++.h>
using namespace std;
int main()
{
    int R, B;
    cin >> R >> B;
    int k = min(R, B);
    int skill = (R - k) * 1 + (B - k) * 2 + k * 5;
    cout << skill << endl;
}