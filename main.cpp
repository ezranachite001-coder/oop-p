#include <iostream>

using namespace std;

int main()
{
    int a, b;
    char symbol;

    cout <<"Enter the first number: ";
    cin >> a;
    cout <<"Enter the second number: ";
    cin >> b;

    cout <<"Enter symbol(+,-,/,*): ";
    cin >> symbol;
    switch(symbol)
    {
      case '+':
        cout << a + b;
        break;

      case '-':
        cout << a - b;
        break;
       case '/':
         if (b!=0)
           cout <<(double) a / b;
         else
           cout <<"Cannot divide by 0";
        break;
         case '*':
        cout << a * b;
        break;

        default:
          cout <<"Invalid Operator!"<<endl;
    }
    return 0;
}
