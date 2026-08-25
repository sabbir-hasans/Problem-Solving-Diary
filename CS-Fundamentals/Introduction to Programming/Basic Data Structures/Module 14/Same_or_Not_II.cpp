#include <bits/stdc++.h>
using namespace std;
class myStack
{
public:
    vector<int> v;
    void push(int val)
    {
        v.push_back(val);
    }
    void pop()
    {
        v.pop_back();
    }
    int top()
    {
        return v.back();
    }
    bool empty()
    {
        return v.size() == 0;
    }
};

class myQueue
{
public:
    vector<int> v;
    int sz = 0;
    void push(int val)
    {
        v.push_back(val);
    }
    void pop()
    {
        sz++;
    }
    int front()
    {
        return v[sz];
    }
    bool empty()
    {
        return sz >= (int)v.size();
    }
};

int main()
{
    int n, m;
    cin >> n >> m;

    myStack st;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }

    myQueue q;
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        q.push(x);
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