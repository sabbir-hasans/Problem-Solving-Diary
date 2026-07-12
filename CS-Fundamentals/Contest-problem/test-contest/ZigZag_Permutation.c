#include<stdio.h>
int main()
{
    //input n
    int n;
    scanf("%d",&n);

    //construct permutation
    int small = 1, large = n;
    //go to position 1 to N
    for (int i = 1; i <= n; i++)
    {
        //check the index is even or odd
        if (i % 2 == 0)
        {
            printf("%d ", large);
            large--;
        }
        else{
            //odd position
            printf("%d ", small);
            small++;
        }
        
    }
    printf("\n");
    
    return 0;
}