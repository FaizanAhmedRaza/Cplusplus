#include <iostream>
using namespace std;
int main()
{
    int i, j, size, temp, arr[10], count = 0, first, replace;
    cout << "Enter the size of array: \n";
    cin >> size;
    cout << "Enter array elements: \n";
    for (i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    for (i = 0; i < (size - 1); i++)
    {
        first = arr[i];
        for (j = (i + 1); j < size; j++)
        {
            if (first > arr[j])
            {
                first = arr[j];
                count++;
                replace = j;
            }
        }
        if (count != 0)
        {
            temp = arr[i];
            arr[i] = first;
            arr[replace] = temp;
        }
        count = 0;
    }
    cout << "\n<-----Array after selection sorting----->\n";
    for (i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}