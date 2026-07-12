#include<bits/stdc++.h>
using namespace std;

void fun(int* p)
{
    int y = 200;
    p = &y; 
    // *p = 100;
    // cout << "In Fun:" << *p << endl;
    cout << "In Fun:" << &p << endl;
}
int main()
{
    int x = 10;
    int* p = &x;
    fun(p);
    // cout << "In Main:" << *p << endl;
    cout << "In Main:" << &p << endl;
    // cout << x << endl; // *p = 100; // from fun function
    cout << *p <<endl;
    return 0;
}