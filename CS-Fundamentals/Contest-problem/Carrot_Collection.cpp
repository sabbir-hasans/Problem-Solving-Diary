#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N,L,R;
        cin >> N >> L >> R;

        int A[101];
        for (int i = 1; i <= N; i++)
        {
            cin >> A[i];
        }
        int leftSum = 0;
        int rightSum = 0;
        for (int i = 1; i < L; i++)
        {
            leftSum += A[i];
        }
        for (int i = R + 1; i <= N; i++)
        {
            rightSum += A[i];
        }
        cout << max(leftSum, rightSum) << endl;
    }
    
    return 0;
}