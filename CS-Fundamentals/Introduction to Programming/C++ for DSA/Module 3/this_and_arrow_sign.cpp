#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    int roll;
    int cls;
    double gpa;

    Student(int roll, int cls, double gpa)
    {
        this->roll = roll;
        this->cls = cls;
        this->gpa = gpa;

        // (*this).roll = roll;
        // (*this).cls = cls;
        // (*this).gpa = gpa;
    }
};

int main()
{
    Student Karim(2, 5, 5.00);

    cout << Karim.roll << " " << Karim.cls << " " << Karim.gpa << endl;
    return 0;
}