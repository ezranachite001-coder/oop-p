#include <iostream>

using namespace std;

int main()
{

    string student_name;
    int theory_marks, practical_marks;

    cout <<"Enter your name:"<<endl;
    cin >> student_name;
    cout <<"Enter theory marks:"<<endl;
    cin >> theory_marks;
    cout <<"Enter practical marks:"<<endl;
    cin >> practical_marks;


    float average_score = (theory_marks+practical_marks)/2;
    if(average_score>=50)
    {
       cout <<"PASS!"<<endl;
    }
    else
    {
      cout <<"FAIL!"<<endl;
    }

    cout <<"==========TEST RESULTS==========="<<endl;
    cout <<"Name: "<<student_name<<endl;
    cout <<"Theory marks = " <<theory_marks<<endl;
    cout <<"Practical marks = "<<practical_marks<<endl;
    cout <<"Average_score = "<<average_score<<endl;
    cout <<"============================"<<endl;






    return 0;
}
