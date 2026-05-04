#include <stdio.h>

// return_type function_name(parameters)
// {
//     //return all code goes to here
// }

void sum()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int ans = a + b;
    printf("%d", ans);
}

int main()
{
    sum();
    return 0;
}