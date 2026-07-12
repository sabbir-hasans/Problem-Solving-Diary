#include<bits/stdc++.h>
using namespace std;
int main()
{
    // int a[5] = {1,2,3,4,5};
    vector<int> v = {1,2,3,4,5};
    v.push_back(100);
    // cout << (int)&a[4] << " " << (int)&a[5];
    cout << (int)&v[4] << " " << (int)&v[5];
    return 0;
}