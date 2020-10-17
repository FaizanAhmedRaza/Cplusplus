#include <iostream>
using namespace std;
main()
{
    int search, first, last, size, middle, arr[20];
    cout << "Enter the size of array: ";
    cin >> size;
    cout << "Enter the elements: \n";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter a number to search: ";
    cin >> search;
    first = 0;
    last = size - 1;
    while (first <= last)
    {
        middle = (first + last) / 2;
        if (arr[middle] == search)
        {
            cout << search << " found at array index " << middle << "\n";
            break;
        }
        else if (arr[middle] < search)
            first = middle + 1;
        else
            last = middle - 1;
    }
}