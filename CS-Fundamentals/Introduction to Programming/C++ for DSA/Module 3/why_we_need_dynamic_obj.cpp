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

Student* fun() //static
{
    Student Karim(2, 5, 4.5);
    Student* p = &Karim;
    return p;
}

int main()  //need to run online
{
    Student* p = fun();
    // cout << (*p).roll << " " << (*p).cls << " " << (*p).gpa << endl;
    cout << p->roll << " " << p->cls << " " << p->gpa << endl;
    return 0;
}