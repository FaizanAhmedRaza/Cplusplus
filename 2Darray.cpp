#include <iostream>
using namespace std;
int main()
{
    int arr[3][3] = {{1, 0, 0}, {0, 1, 0}, {0, 0, 1}};
    cout << "This is a 3 x 3 Matrix"
         << "\n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << "\t";
        }
        cout << "\n";
    }
}