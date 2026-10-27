
#include <iostream>
using namespace std;

int main()
{
    float account_balance = 500;
    float withdrawal_amount;

    while (account_balance > 0)
    {
        cout << "Enter amount you wish to withdraw: ";
        cin >> withdrawal_amount;

        if (withdrawal_amount > account_balance)
        {
            cout << "Insufficient balance!" << endl;
            continue;
        }

        if (withdrawal_amount <= 0)
        {
            cout << "Enter a valid amount!" << endl;
            continue;
        }

        account_balance -= withdrawal_amount;

        cout << "Remaining balance: "<< account_balance << endl;
    }

    cout << "Your account balance is zero." << endl;

    return 0;
}
