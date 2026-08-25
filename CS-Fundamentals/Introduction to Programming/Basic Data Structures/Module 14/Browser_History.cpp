#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<string> l;
    string s;

    while (cin >> s && s != "end")
    {
        l.push_back(s);
    }

    int Q;
    cin >> Q;

    auto current = l.begin();

    while (Q--)
    {
        string command;
        cin >> command;

        if (command == "visit")
        {
            string address;
            cin >> address;

            bool flag = false;

            for (auto it = l.begin(); it != l.end(); it++)
            {
                if (*it == address)
                {
                    current = it;
                    cout << *current << endl;
                    flag = true;
                    break;
                }
            }

            if (!flag)
            {
                cout << "Not Available" << endl;
            }
        }

        else if (command == "next")
        {
            if (next(current) != l.end())
            {
                current++;
                cout << *current << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }

        else if (command == "prev")
        {
            if (current != l.begin())
            {
                current--;
                cout << *current << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
    }

    return 0;
}