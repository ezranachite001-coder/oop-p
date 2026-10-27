#include <iostream>

using namespace std;
void getCustomerDetails();
float calculateBill(float units,float rate);
float applyDiscount(float bill);
void displayBill();
string name;
float units, bill, discount, rate=50,finalAmount;
int main()
{
    getCustomerDetails();

    bill = calculateBill(units,rate);

    finalAmount = applyDiscount(bill);

    displayBill();
    return 0;
}
void getCustomerDetails()
{
    cout << "Enter customer name: ";
    cin >> name;

    cout << "Enter units consumed: ";
    cin >> units;
}
float calculateBill(float units, float rate)
{
    return units * rate;
}
float applyDiscount(float bill)
{
    if (units > 100)
    {
        discount = bill * 0.10;
    }
    else
    {
        discount = 0;
    }

    return bill - discount;
}
void displayBill()
{
    cout << "\n--- WATER BILL ---" << endl;
    cout << "Customer Name: " << name << endl;
    cout << "Units Consumed: " << units << endl;
    cout << "Total Bill: KSh " << bill << endl;
    cout << "Discount: KSh " << discount << endl;
    cout << "Final Amount: KSh " << finalAmount << endl;
}
