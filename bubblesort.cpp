#include <iostream>
using namespace std;
int main()
{
    int a[] = {4, 3, 2, 5, 7, 8};
    int temp;
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[i];
                a[i] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < 6; i++)
    {
        cout << a[i] << " ";
    }
}
