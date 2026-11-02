#include<bits/stdc++.h>
using namespace std;
int main()
{
    int B,H,C;
    cin >> B >> H >> C;
    int bread = B/2;
    int hamCheese = H + C;
    int sandwichs = min (bread, hamCheese);
    cout << sandwichs << endl;
    return 0;
}