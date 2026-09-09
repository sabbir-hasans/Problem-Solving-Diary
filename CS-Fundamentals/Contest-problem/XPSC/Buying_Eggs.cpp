#include<bits/stdc++.h>
using namespace std;
int main()
{
    int X,Y,F;
    cin >> X >> Y >> F;

    int first_shop = 12 * X;
    int second_shop = ((12 * Y) + F);

    int result = min(first_shop, second_shop);

    cout << result << endl;

    return 0;
}