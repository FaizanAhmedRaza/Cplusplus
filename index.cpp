#include <iostream>
#include <istream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter 3 Values: \n";
    cin >> a;
    cin >> b;
    cin >> c;
    if (a > b && a > c)
    {
        cout << "First number is greater";
    }
    else if (b > a && b > c)
    {
        cout << "Second number is greater";
    }
    else
    {
        cout << "Third number is greater";
    }
    return 0;
}