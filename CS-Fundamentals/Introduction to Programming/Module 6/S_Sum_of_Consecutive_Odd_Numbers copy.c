#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T); // test case কয়টা আছে সেটা নেওয়া

    while (T--) // T বার loop চলবে (প্রতিটা test case এর জন্য)
    {
        int X, Y;
        scanf("%d %d", &X, &Y); // দুইটা সংখ্যা নেওয়া

        int start, end; // ছোট এবং বড় সংখ্যা রাখার জন্য

        // কোনটা ছোট আর কোনটা বড় সেটা ঠিক করা
        if (X < Y)
        {
            start = X; // ছোট সংখ্যা
            end = Y;   // বড় সংখ্যা
        }
        else
        {
            start = Y; // ছোট সংখ্যা
            end = X;   // বড় সংখ্যা
        }

        int sum = 0; // যোগফল রাখার জন্য variable

        // X এবং Y বাদ দিয়ে মাঝের সংখ্যাগুলোতে loop চালানো
        for (int i = start + 1; i < end; i++)
        {
            // যদি সংখ্যা odd (বিজোড়) হয়
            if (i % 2 != 0)
            {
                sum += i; // তাহলে sum এর সাথে যোগ করা
            }
        }

        printf("%d\n", sum); // result print করা
    }

    return 0; // program শেষ
}