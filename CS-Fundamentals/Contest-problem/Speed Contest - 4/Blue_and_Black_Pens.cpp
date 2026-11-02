#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin >> a >> b;
    int sum = a + b;
    int blue = 3 * a;
    int minimum = min(blue, sum);
    cout << minimum << endl;
    return 0;
}