#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
    int roll;
    int cls;
    double gpa;

    Student( int r, int c, double g)
    {
        roll = r;
        cls = c;
        gpa = g;
    }
};

int main()
{
    // Student Rahim;
    // Rahim.roll = 45;
    // Rahim.cls = 5;
    // Rahim.gpa = 3.20;

    // Student Karim( 2,5,5.00);
    int r;
    int c;
    double g;
    cin >> r >> c >> g;
    Student Karim(r,c,g);



    
    // cout << Rahim.roll << " " << Rahim.cls << " " << Rahim.gpa << endl;
    cout << Karim.roll << " " << Karim.cls << " " << Karim.gpa << endl;
    return 0;
}