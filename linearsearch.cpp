//<----Also known as Sequential Search---->
#include <iostream>
using namespace std;
main()
{
    int search, flag = 0, size, arr[20];
    cout << "Enter the size of array: ";
    cin >> size;
    cout << "Enter the elements: \n";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter a number to search: ";
    cin >> search;
    for (int i = 0; i < size - 1; i++)
    {
        if (arr[i] == search)
        {
            cout << search << " found at array index " << i << "\n";
            flag = 1;
        }
    }
    if (flag == 0)
        cout << search << " Not found! It is not in array/List.";
}