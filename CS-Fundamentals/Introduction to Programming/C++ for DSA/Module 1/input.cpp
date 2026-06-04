#include<iostream>
using namespace std;
int main()
{
    int x = 100;
    char c = 'A';
    double d = 34.56;
    // std:: cin >> x;
    cin >> x >> c >> d;
    // std:: cout << x << std::endl;
    cout << x << endl
         << c << endl
         << d << endl;

         cout << (int)c << endl;
         cout << (char)x << endl;
    return 0;
}