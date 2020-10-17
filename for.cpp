#include <iostream>
using namespace std;
int main()
{
    cout << "This is a NESTED For loop that prints 100 to 200 \n";
    for (int i = 1; i < 2; i++)
    {
        for (int j = 0; j <= 9; j++)
        {
            for (int k = 0; k <= 9; k++)
            {
                cout << i << "" << j << "" << k << "\n";
            }
        }
        cout << "200\n";
    }
    return 0;
}