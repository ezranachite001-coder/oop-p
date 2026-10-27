
#include <iostream>
using namespace std;

int main()
{
    float revenue[7], total = 0, average;

    for (int i = 0; i < 7; i++)
    {
        cout << "Enter revenue for day " << i + 1 << ": ";
        cin >> revenue[i];

        total = total + revenue[i];
    }

    average = total / 7;

    cout << "Total weekly revenue = " << total << endl;
    cout << "Average daily revenue = " << average << endl;

    return 0;
}
