#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
    string name;
    int roll;
    int math;
    int english;
    Student(string name, int roll, int math, int english)
    {
        this->name = name;
        this->roll = roll;
        this->math = math;
        this->english = english;
    }
    void total()
    {
        cout << "Total marks of " << name << " = " << math+english << endl;
    }
    // void hello()
    // {
    //     cout << "Hello from " << name << endl;
    // }
};
int main()
{
    Student sakib("Sakib Ahamed", 23, 85, 92);
    cout << sakib.name << endl;
    sakib.total();
    Student rakib("Rakib Ahamed", 24, 65, 95);
    rakib.total();
    return 0;
}