#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;

    int frequency[26]= {0};
    for (int i = 0; i < s.length(); i++)
    {
        frequency[s[i] - 'a'] = 1;
    }
    for (int i = 0; i < 26; i++)
    {
        if (frequency[i] == 0)
        {
            cout << char (i + 'a') << endl;
            return 0;
        }
        
    }
    cout << "None" << endl;
    
    return 0;
}