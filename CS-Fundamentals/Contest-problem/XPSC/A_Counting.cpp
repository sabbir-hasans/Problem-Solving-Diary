#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;

    if (a > b)
    {
        cout << 0 << endl;
    }
    else if(a <= b)
    {
        int count = b - a + 1;
        cout << count << endl;
    }    
    return 0;
}