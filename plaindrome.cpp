#include <iostream>
using namespace std;
int main()
{
    string input;
    int num, temp, rem, sum = 0;
    cout << "Enter a String to check whether it is plaindrome or not: ";
    cin >> input;

    if (input == string(input.rbegin(), input.rend()))
    {
        cout << "This string is plaindrome.\n\n";
    }
    else
    {
        cout << "This string is NOT plaindrome.\n\n";
    }
    //<----------------------------------------------------------------->//
    //          This block of code for checking plaindrome numbers        //
    cout << "Enter a Number to check whether it is plaindrome or not: ";
    cin >> num;
    temp = num;
    while (num > 0)
    {
        rem = num % 10;
        sum = (sum * 10) + rem;
        num = num / 10;
    }
    if (temp == sum)
    {
        cout << "This number is plaindrome.";
    }
    else
        cout << "This number is NOT plaindrome.";

    return 0;
}