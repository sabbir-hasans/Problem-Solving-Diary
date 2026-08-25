#include <bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin >> q;

    queue<long long> queue;

    for (int i = 0; i < q; i++)
    {
        int type;
        cin >> type;

        if (type !=1  && queue.empty())
        {
            cout << -1 << endl;
        }
        else if (type == 1)
        {
            long long x;
            cin >> x;
            queue.push(x);
        }
        else
        {
            cout << queue.front() << endl;
            queue.pop();
        }
    }

    return 0;
}