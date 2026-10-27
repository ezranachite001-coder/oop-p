
#include <iostream>
using namespace std;

int main()
{
    int chain[3][5][10];
    int totalOccupied = 0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            for (int k = 0; k < 10; k++)
            {
                cout << "Enter 1 if occupied or 0 if vacant: ";
                cin >> chain[i][j][k];

                if (chain[i][j][k] == 1)
                    totalOccupied++;
            }
        }
    }

    cout << "Total occupied rooms across all branches = "
         << totalOccupied << endl;

    return 0;
}
