#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int A, B;
        cin >> A >> B;

        int small_Pizza = 10;
        int smallArea = small_Pizza * small_Pizza;

        int large_Pizza = 15;
        int largeArea = large_Pizza * large_Pizza;

        int smallSide = smallArea * B;
        int largeSide = largeArea * A;


        if (smallSide > largeSide)
        {
            cout << "Small" << endl;
        }
        else if (smallSide < largeSide)
        {
            cout << "Large" << endl;
        }
        else
        {
            cout << "Equal" << endl;
        }
    }

    return 0;
}