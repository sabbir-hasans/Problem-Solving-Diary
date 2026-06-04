#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    while (getline(cin, s))
    {
        string sorted_word = "";
        for (int i = 0; s[i] != '\0'; i++)
        {
            if (s[i] != ' ')
            {
                sorted_word += s[i];
            }
        }

        sort(sorted_word.begin(), sorted_word.end());// shortting learn form conceptual Sessions
        cout << sorted_word << endl;
    }

    return 0;
}