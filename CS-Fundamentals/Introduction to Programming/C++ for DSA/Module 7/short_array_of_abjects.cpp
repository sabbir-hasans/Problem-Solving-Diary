#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int cls;
    int roll;
    int marks;
};

// //assending order marks
// bool cmp(Student l, Student r)
// {
//     if (l.marks < r.marks)
//     {
//         return true;
//     }
//     else
//     {
//         return false;
//     }
// }

// //Decending order marks
// bool cmp(Student l, Student r)
// {
//     if (l.marks > r.marks)
//     {
//         return true;
//     }
//     else
//     {
//         return false;
//     }
// }

// //Decending order roll
// bool cmp(Student l, Student r)
// {
//     if (l.roll > r.roll)
//     {
//         return true;
//     }
//     else
//     {
//         return false;
//     }
// }

// //assending order roll shorrt cut
// bool cmp(Student l, Student r)
// {
//     return (l.roll < r.roll);
// }

// // assending order MARK EQUAL some of person
// bool cmp(Student l, Student r)
// {
//     if (l.marks >= r.marks)
//     {
//         return true;
//     }
//     else
//     {
//         return false;
//     }
// }

// // assending order if all MARK EQUAL 
// bool cmp(Student l, Student r)
// {
//     if (l.marks > r.marks)
//     {
//         return true;
//     }
//     else if(l.marks < r.marks)
//     {
//         return false;
//     }
//     else
//     {
//         if(l.roll < r.roll)
//         {
//             return true;
//         }
//         else
//         {
//             return false;
//         }
//     }
// }

// // assending order if all MARK EQUAL shoer cut
// bool cmp(Student l, Student r)
// {
//     if (l.marks == r.marks)
//     {
//         return l.roll < r.roll;
//     }
//     else
//     {
//         return l.marks > r.marks;
//     }   
// }

// assending order if all MARK EQUAL shoer cut with turnary operator
bool cmp(Student l, Student r)
{
    return (l.marks == r.marks) ? l.roll < r.roll : l.marks > r.marks; 
}

int main()
{
    int n;
    cin >> n;
    Student a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].name >> a[i].roll >> a[i].marks;
    }

    sort(a, a + n, cmp);
    for (int i = 0; i < n; i++)
    {
        cout << a[i].name << " " << a[i].roll << " " << a[i].marks << endl;
    }

    return 0;
}