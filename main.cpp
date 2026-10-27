#include <iostream>

using namespace std;

int main()
{
    string student_name,Grade;
    int exam_marks;

    cout <<"Enter your name:"<<endl;
    cin >> student_name;
    cout <<"Enter exam marks:"<<endl;
    cin >> exam_marks;




    if(exam_marks >= 70)
    {
       Grade = "A";
    }
    else if(exam_marks >= 60 && exam_marks <= 69)
    {
      Grade = "B";
    }
    else if(exam_marks >= 50 && exam_marks <= 59)
    {
      Grade = "C";
    }
    else if(exam_marks >= 40 && exam_marks <= 49)
    {
      Grade = "D";

    }
    else
    {
      Grade = "E";
    }

    cout <<"==========TEST RESULTS==========="<<endl;
    cout <<"Name: "<<student_name<<endl;
    cout <<"Exam marks = " <<exam_marks<<endl;
    cout <<"Grade: "<<Grade<<endl;

    cout <<"============================"<<endl;
    return 0;
}
