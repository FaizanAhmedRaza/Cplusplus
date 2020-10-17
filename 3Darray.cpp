#include <iostream>
using namespace std;
int main()
{
    int arr[3][3][3] = {{{1, 2, 3}, {1, 2, 3}, {1, 2, 3}}, {{1, 2, 3}, {1, 2, 3}, {1, 2, 3}}, {{1, 2, 3}, {1, 2, 3}, {1, 2, 3}}};
    cout << "This program prints three matrix \n\n";
    for (int i = 0; i <= 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                cout << arr[i][j][k] << " ";
            }
            cout << "\n";
        }
        cout << "\n";
    }
    return 0;
}