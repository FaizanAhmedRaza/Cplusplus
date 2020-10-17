// Use Recursion technique
#include <iostream>
using namespace std;
int fact(int);
int fac(int);
int main()
{
    int no;
    cout << "Enter the number: ";
    cin >> no;
    cout << "\n<-----This is a recursive solution----->";
    cout << "\nThe factorial of " << no << " is " << fact(no) << ".\n";
    cout << "\n<-----This is an iterative solution----->";
    cout << "\nThe factorial of " << no << " is " << fac(no) << ".\n";
}
int fact(int no) //for recursive
{
    if (no <= 1)
        return 1;
    else
        return (no * fact(no - 1));
}
int fac(int no) //for iterative
{
    int product = 1;
    while (no >= 1)
    {
        product *= no;
        no--;
    }
    return product;
}