
#include <iostream>
using namespace std;

int main()
{
    int occupancy[5][10];
    int occupied, vacant;

    for (int i = 0; i < 5; i++)
    {
        occupied = 0;
        vacant = 0;

        for (int j = 0; j < 10; j++)
        {
            cout << "Enter 1 if occupied or 0 if vacant, Floor "
                 << i + 1 << ", Room " << j + 1 << ": ";
            cin >> occupancy[i][j];

            if (occupancy[i][j] == 1)
                occupied++;
            else
                vacant++;
        }

        cout << "Floor " << i + 1 << endl;
        cout << "Occupied rooms = " << occupied << endl;
        cout << "Vacant rooms = " << vacant << endl;
    }

    return 0;
}
