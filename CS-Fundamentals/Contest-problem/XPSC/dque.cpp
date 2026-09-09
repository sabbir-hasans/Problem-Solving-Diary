#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    deque<int> dq;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        dq.push_back(x);
    }

    for (auto value : dq)
    {
        cout << value << " ";
    }
    cout << '\n';

    return 0;
}