#include <iostream>
using namespace std;
void quick(int a[], int n, int begining, int end, int *locptr)
{
    int left, right, temp, loc;
    left = begining;
    right = end;
    *locptr = begining;
    //Right to left iteration
    while (a[*locptr] <= a[right] && *locptr != right)
    {
        right--;
    }
    if (*locptr == right)
        return;
    if (a[*locptr] > a[right])
    {
        temp = a[right];
        a[right] = a[*locptr];
        a[*locptr] = temp;
        *locptr = right;
    }
    //Left to right iteration
    while (a[*locptr] >= a[left] && *locptr != left)
    {
        left++;
    }
    if (*locptr == left)
        return;
    if (a[left] > a[*locptr])
    {
        temp = a[left];
        a[left] = a[*locptr];
        a[*locptr] = temp;
        *locptr = left;
    }
}
//this function maintain stack
void quicksort(int a[], int n)
{
    int beg, end, loc, top = -1;
    int lower[30], upper[30];
    if (n > 1)
    {
        top++;
        lower[top] = 0;
        upper[top] = n - 1;
    }
    while (top != -1)
    {
        beg = lower[top];
        end = upper[top];
        top--;
        quick(a, n, beg, end, &loc);
        if (beg < loc - 1)
        {
            top++;
            lower[top] = beg;
            upper[top] = loc - 1;
        }
        if (loc + 1 < end)
        {
            top++;
            lower[top] = loc + 1;
            upper[top] = end;
        }
    }
}
int main()
{
    int a[30], n, i;
    cout << "Enter the number of data element to be sorted: ";
    cin >> n;
    cout << "\nEnter array elements:\n";
    for (i = 0; i < n; i++)
        cin >> a[i];
    quicksort(a, n);
    cout << "\nSorted data: ";
    for (i = 0; i < n; i++)
        cout << "->" << a[i];
    return 0;
}