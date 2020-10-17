#include <iostream>
using namespace std;

void merge(int *a, int first, int last, int mid)
{
    int i = first, j = mid + 1, k = 0, temp[last - first + 1];
    while (i <= mid && j <= last)
    {
        if (a[i] < a[j])
        {
            temp[k] = a[i];
            k++;
            i++;
        }
        else
        {
            temp[k] = a[j];
            k++;
            j++;
        }
    }
    while (i <= mid)
    {
        temp[k] = a[i];
        k++;
        i++;
    }
    while (j <= last)
    {

        temp[k] = a[j];
        k++;
        j++;
    }
    for (i = first; i <= last; i++)
    {
        a[i] = temp[i - first];
    }
}

void mergeSort(int *a, int first, int last)
{
    int mid;
    if (first < last)
    {
        mid = (first + last) / 2;

        mergeSort(a, first, mid);
        mergeSort(a, mid + 1, last);

        merge(a, first, last, mid);
    }
}

int main()
{
    int i, n;
    cout << "Enter the size of array: ";
    cin >> n;
    int arr[n];
    for (i = 0; i < n; i++)
    {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }
    mergeSort(arr, 0, n - 1);

    // Printing the sorted data.
    cout << "\nSorted Data ";
    for (i = 0; i < n; i++)
        cout << "->" << arr[i];

    return 0;
}