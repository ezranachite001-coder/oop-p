#include <iostream>

using namespace std;

int main()
{
    string customer_name, phone_model;
    int quantity_bought, price,total_sales;

    cout <<"Enter your name:"<<endl;
    cin >> customer_name;
    cout <<"Enter the phone model:"<<endl;
    cin >> phone_model;
    cout <<"Enter number of pcs:"<<endl;
    cin >> quantity_bought;
    cout <<"Enter price per phone:"<<endl;
    cin >> price;

    total_sales = quantity_bought*price;
    cout <<"==========RECEIPT==========="<<endl;
    cout <<"Name: "<<customer_name<<endl;
    cout <<"Model: "<<phone_model<<endl;
    cout <<"Quantity bought: "<<quantity_bought<<endl;
    cout <<"Price per phone: "<<price<<endl;z
    cout <<"Total = "<<total_sales<<endl;
    cout <<"============================"<<endl;



    return 0;
}
