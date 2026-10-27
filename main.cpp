
#include <iostream>
using namespace std;

void getEmployeeDetails();
float calculateOvertimePay(float hours, float rate);
float calculateNetSalary(float basic, float overtime);
void displayPayslip();


string name;
float basic, hours, rate = 500, overtime, net;


int main()
{
    getEmployeeDetails();

    overtime = calculateOvertimePay(hours, rate);

    net = calculateNetSalary(basic, overtime);

    displayPayslip();

    return 0;
}


void getEmployeeDetails()
{
    cout << "Enter employee name: ";
    cin >> name;

    cout << "Enter basic salary: ";
    cin >> basic;

    cout << "Enter overtime hours: ";
    cin >> hours;
}

float calculateOvertimePay(float hours, float rate)
{
    return hours * rate;
}

float calculateNetSalary(float basic, float overtime)
{
    return basic + overtime;
}

void displayPayslip()
{
    cout << "\n--- PAYSLIP ---" << endl;
    cout << "Name: " << name << endl;
    cout << "Basic Salary: " << basic << endl;
    cout << "Overtime Pay: " << overtime << endl;
    cout << "Net Salary: " << net << endl;
}
