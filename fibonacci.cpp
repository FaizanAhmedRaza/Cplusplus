// Use Recursion technique
#include <iostream>
using namespace std;
int fibonacci(int n);
int main()
{
    int n;
    cout << "How many elements of fibonacci series that you want to see : ";
    cin >> n;
    cout << "Fibonacci Series: ";
    for (int i = 1; i <= n; i++)
        cout << " " << fibonacci(i);
    return 0;
}
int fibonacci(int n)
{
    if (n == 1 || n == 2)
        return 1;
    return (fibonacci(n - 1) + fibonacci(n - 2));
}
