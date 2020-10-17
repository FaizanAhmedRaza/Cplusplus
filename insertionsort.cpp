#include <iostream>
using namespace std;
int main()
{
    int i, j, temp, n, a[20];
    cout << "Enter the size of array: ";
    cin >> n;
    cout << "Enter number of elements: ";
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (i = 1; i < n; i++)
    {
        temp = a[i];
        j = i - 1;
        while (temp < a[j] && j >= 0)
        {
            a[j + 1] = a[j];
            j = j - 1;
        }
        a[j + 1] = temp;
    }
    cout << "\n\tArray after insertion sorting\n";
    for (i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}