// // stategy 1
// #include <stdio.h>
// void hello(int i)
// {
//     if (i == 1) //end condition
//     {
//         return;
//     }
//     printf("%d\n", i);
//     hello(i - 1); //increment/decrement
// }
// int main()
// {
//     int i = 10; // initialization/staring
//     hello(i);  // hello function call
//     return 0;
// }

// stategy 2

#include <stdio.h>
void hello(int i)
{
    if (i == 5)
    {
        return;
    }
    hello(i + 1);
    printf("%d\n", i);
}
int main()
{
    // int i = 1;
    hello(1);
    return 0;
}