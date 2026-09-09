#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int i = 0;
    int j = n - 1;

    int sereja = 0;
    int dima = 0;

    bool turn = true;

    while (i <= j)
    {

        if (a[i] > a[j])
        {
            if (turn)
                sereja += a[i];
            else
                dima += a[i];

            i++;
        }
        else
        {
            if (turn)
                sereja += a[j];
            else
                dima += a[j];

            j--;
        }

        turn = !turn;
    }

    cout << sereja << " " << dima << endl;

    return 0;
}