#include <iostream>
using namespace std;
int main()
{
    int num, i = 1, factorial = 1;
    cout << "Enter number in +ve Integer: ";
    cin >> num;
    while (i <= num)
    {
        factorial *= i;
        ++i;
    }
    cout << "\nFactorial of the numver is " << factorial;
    return 0;
}