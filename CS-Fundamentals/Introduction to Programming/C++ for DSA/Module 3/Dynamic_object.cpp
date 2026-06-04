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
    }
};

int main()
{
    Student* Karim = new Student(10, 5, 4.56);
    cout << Karim->roll << " " << Karim->cls<< " " << Karim->gpa << endl;
    return 0;
}