
#include <iostream>
using namespace std;

int main()
{
    string correctUserName = "Ezra", user_name;
    int correctPassword = 1234, password;

    do
    {
        cout << "Enter username: ";
        cin >> user_name;

        cout << "Enter password: ";
        cin >> password;

        if (user_name == correctUserName)
        {
            cout << "Enter password: ";
            cin >> password;
            if (password == correctPassword)
            {
                cout << "Access granted!" << endl;
            }
            else
            {
                cout << "Incorrect password!" << endl;
            }
        }
        else
        {
            cout << "Incorrect username!" << endl;
        }

    }
    while (user_name != correctUserName ||
           password != correctPassword);

    return 0;
}
