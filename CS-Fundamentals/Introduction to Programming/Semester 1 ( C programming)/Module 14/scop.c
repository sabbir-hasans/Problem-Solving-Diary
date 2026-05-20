#include <stdio.h>

// return_type function_name(parameters)
// {
//     //return all code goes to here
// }
int x = 10; // global variballe
int sum(int a, int b)
{
    int ans = a + b;
    return ans;
}

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int ans = sum(a, b);
    printf("%d", ans);
    return 0;
}