#include <stdio.h>

// return_type function_name(parameters)
// {
//     //return all code goes to here
// }

int sum()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int ans = a + b;
    return ans;
}
// int sub(int num1, int num2)
// {
//     int ans = num1 - num2;
//     return ans;
// }

int main()
{
    // int a, b;
    // scanf("%d %d", &a, &b);
    int val = sum();
    printf("%d", val);
    return 0;
}