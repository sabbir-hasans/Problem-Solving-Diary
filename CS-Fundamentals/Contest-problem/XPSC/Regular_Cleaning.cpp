#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin >> N;

    int remainDays = N % 10;
    int NextDay = 10 - remainDays;
    cout << NextDay << endl;
    return 0;
}