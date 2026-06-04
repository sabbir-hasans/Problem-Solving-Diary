#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    int student_id;
    string student_name;
    char student_section;
    int total_marks;
};

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        Student first_student;
        Student second_student;
        Student third_student;

        cin >> first_student.student_id >> first_student.student_name >> first_student.student_section >> first_student.total_marks;
        cin >> second_student.student_id >> second_student.student_name >> second_student.student_section >> second_student.total_marks;
        cin >> third_student.student_id >> third_student.student_name >> third_student.student_section >> third_student.total_marks;

        Student best_student = first_student;
        if (second_student.total_marks > best_student.total_marks)
        {
            best_student = second_student;
        }
        else if (second_student.total_marks == best_student.total_marks)
        {
            if (second_student.student_id < best_student.student_id)
            {
                best_student = second_student;
            }
        }

        if (third_student.total_marks > best_student.total_marks)
        {
            best_student = third_student;
        }
        else if (third_student.total_marks == best_student.total_marks)
        {
            if (third_student.student_id < best_student.student_id)
            {
                best_student = third_student;
            }
        }
        cout << best_student.student_id << " " << best_student.student_name << " " << best_student.student_section << " " << best_student.total_marks << endl;
    }

    return 0;
}