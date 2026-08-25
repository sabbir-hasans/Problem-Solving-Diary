#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;

    stack<int> st;
    queue<int> q;

    for (int i = 0; i < n; i++) // Stack input
    {
        int val;
        cin >> val;
        st.push(val);
    }

    for (int i = 0; i < m; i++) // Queue input
    {
        int val;
        cin >> val;
        q.push(val);
    }

    if (n != m)
    {
        cout << "NO";
        return 0;
    }

    while (!st.empty())
    {
        if (st.top() != q.front())
        {
            cout << "NO";
            return 0;
        }

        st.pop();
        q.pop();
    }
    cout << "YES";
    return 0;
}