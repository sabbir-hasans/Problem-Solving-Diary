#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // pair<data type, data type> variable;
    // pair<string, int> students = make_pair("rahim", 10);
    
    // pair<string, int> students = {"hahim", 10};
    // cout << students.first << " " << students.second << endl;

    // auto [name, roll] = students;
    // cout << name << " " << roll <<'\n';

    // int n;
    // cin >> n;
    // pair<string,int> students[n];
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> students[i].first >> students[i].second;
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     cout << students[i].first << " " << students[i].second << '\n';
    // }

    // for (auto [x, y] : students)
    // {
    //     cout << x << " " << y << '\n';
    // }


    tuple<string,int,string> t = {"hahim",10,"017"};
    // tuple<string,int,string> t = make_tuple("rahim",10,"017");
    // cout << get<0>(t) << " " << get<1>(t) << " " << get<2>(t) << '\n';
    auto [name,roll,phoneNumber] = t;
    cout << name << " " << roll << " " << phoneNumber << '\n';
    
    return 0;
}