#include <iostream>
using namespace std;
int main()
{
    int num, i, j, k, counter = 0;
    cout << "Enter number that you want below all primes : ";
    cin >> num;
    cout << "\n";
    for (i = 1; i < num; i++)
    {
        k = 0;
        for (j = 1; j <= i; j++)
        {
            if (i % j == 0)
                k++;
        }
        if (k == 2)
            cout << i << ", ";
    }
    cout << " are prime numbers below your number " << num << ".\n";
    //<--------------------------------------------------------------->//
    //     This code of block is for checking is prime or not!!    //
    cout
        << "\nEnter a number to check whether it is prime or not: ";
    cin >> num;
    
    for (i = 2; i <= num - 1; i++)
    {
        if (num % i == 0)
        {
            cout << "\n"
                 << num << " is NOT a prime number.\n";
            break;
        }
        counter++;
    }
    if (counter == num - 2)
        cout << num << " is a prime number.\n";
    return 0;
}