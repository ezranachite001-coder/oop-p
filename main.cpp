#include <iostream>

using namespace std;

int main()
{
    string employee_name;
    int basic_salary, bonus,total_salary;

    for(int i=1;i<=5;i++)
    {
        cout <<"Enter employee name: ";
        cin >> employee_name;

        cout <<"Enter basic salary: ";
        cin >> basic_salary;

        bonus = 0.05*basic_salary;
        total_salary = basic_salary + bonus;
        cout <<"\n=====Employee Report====="<<endl;
        cout <<"Employee name: "<<employee_name<<endl;
        cout <<"Basic salary: "<<basic_salary<<endl;
        cout <<"Bonus: "<<bonus<<endl;
        cout <<"Total salary: "<<total_salary<<endl;


    }


    return 0;
}
