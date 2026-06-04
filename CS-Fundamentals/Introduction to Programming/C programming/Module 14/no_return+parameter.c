#include <stdio.h>

// return_type function_name(parameters)
// {
//     //return all code goes to here
// }

void sum(int a, int b)
{
    int ans = a + b;
    printf("%d", ans);
}


int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    sum(a, b);
    return 0;
}