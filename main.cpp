#include <iostream>

using namespace std;

int main()
{
    string student_name,status;
    int exam_score, age;

    cout <<"Enter your name:"<<endl;
    cin >> student_name;
    cout <<"Enter exam score:"<<endl;
    cin >> exam_score;




    if(age >= 18)
    {
        if(exam_score >= 50)
        {
          status = "Admitted";
        }
        else
        {
          status = "Not admitted: Low score";
        }
    }
    if( age < 18)
      status = "Not admitted: underage";



    cout <<"==========TEST RESULTS==========="<<endl;
    cout <<"Name: "<<student_name<<endl;
    cout <<"Exam marks = " <<exam_score<<endl;
    cout <<status<<endl;


    cout <<"============================"<<endl;
    return 0;
}
