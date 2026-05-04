#include<stdio.h>

// return_type function_name(parameters)
// {
//     //return all code goes to here
// }

int sum(int num1, int num2)
{
    int ans = num1 + num2;
    return ans;
}
int sub(int num1, int num2)
{
    int ans = num1 - num2;
    return ans;
}

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int value1 = sum(a,b);  
    int value2 = sub(a,b);  
    printf("%d %d", value1, value2);
    return 0;
}