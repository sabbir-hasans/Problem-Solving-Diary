#include <stdio.h> 
int main()
{
    int N;
    scanf("%d", &N);
    long long int sum = 0;
    

    int A[N]; 

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
        sum += A[i];        
    }

    if (sum < 0)
    {
        sum = -sum; 
    }

    printf("%lld\n", sum); 

    return 0;
}