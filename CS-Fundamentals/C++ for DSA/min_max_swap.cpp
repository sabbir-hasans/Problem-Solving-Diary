#include <iostream>
#include<algorithm>
using namespace std;
int main()
{
    int a,b;
    cin >> a >> b;
    // if (a < b)
    // {
    //     cout << a << endl;
    // }
    // else
    // {
    //     cout << b << endl;
    // }
    cout << min(a,b) << endl;
    cout << min({1, 2, 4, 6, 7, 8}) << endl;
    cout << max(a,b) << endl;
    cout << max({1, 2, 4, 6, 7, 8}) << endl;

    // int temp = a;
    // a = b;
    // b = temp;

    swap(a, b);
    cout << a << " " << b << endl;
    return 0;
}