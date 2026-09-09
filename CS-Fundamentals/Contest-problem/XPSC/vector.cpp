#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // int n;
    // cin >> n;
    // // vector<int> v(n);
    // // for (int i = 0; i < n; i++)
    // // {
    // //     cin >> v[i];
    // // }
    // vector<int> v;
    // for (int i = 0; i < n; i++)
    // {
    //     int x;
    //     cin >> x;
    //     v.push_back(x);
    // }

    // // cout << v.size() << '\n';
    // v.pop_back();
    // // cout << v.size() << '\n';
    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << v[i] << " ";
    // }
    // cout << '\n';
    // // cout << v.front() << '\n';
    // // cout << v.back() << '\n';
    // v.clear();
    // cout << v.empty() << '\n';
    
    // int n;
    // cin >> n;
    // vector<int> v(n, 5);
    // for (int i = 0; i < n; i++)
    // {
    //     cout << v[i] << " ";
    // }
    // cout << '\n';


    // int n;
    // cin >> n;
    // vector<int> v(n);
    // v.assign(n, 6);
    // for (int i = 0; i < n; i++)
    // {
    //     cout << v[i] << " ";
    // }
    // cout << '\n';


    // vector<int> v;
    // v.resize(4);
    // for (int i = 0; i < v.size(); i++)
    // {
    //     cin >> v[i];
    // }
    
    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << v[i] << " ";
    // }
    // cout << '\n';

    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << v[i] << " ";
    // }
    // cout << '\n';

    // auto it = v.begin() + 1;
    // cout << *it << '\n';
    for(auto it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";
    }
    cout << '\n';

    return 0;
}