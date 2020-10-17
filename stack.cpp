#include <iostream>
using namespace std;
int stack[10], space = 10, top = -1;
void push(int value)
{
    if (top >= space - 1)
    {
        cout << "\nStack is overflow...\n";
    }
    else
    {
        top++;
        stack[top] = value;
    }
}
void pop()
{
    if (top <= -1)
    {
        cout << "\nStack is underflow...\n";
    }
    else
    {
        cout << "\nThe pop element is: " << stack[top] << "\n";
        top--;
    }
}
void topone()
{
    if (top >= 0)
    {
        cout << "\nThe top element in stack is: " << stack[top] << "\n";
    }
    else
    {
        cout << "\nStack is empty...\n";
    }
}
void displaystack()
{
    if (top >= 0)
    {
        cout << "\nStack elements are: ";
        for (int i = top; i >= 0; i--)
        {
            cout << stack[top] << " ";
        }
    }
    else
    {
        cout << "\nStack is empty...\n";
    }
}
int main()
{
    int choice, value;
    cout << "\n\n---------------ARRAY BASED IMPLEMENTATION OF STACK-------------\n\n\n";
    cout << "1. Push an element on stack" << endl;
    cout << "2. Pop an element from stack" << endl;
    cout << "3. Display stack" << endl;
    cout << "4. Top element" << endl;
    cout << "5. Exit\n\n\n"
         << endl;
    cout << "<------------------------------------------------------------------->\n\n";
    do
    {
        cout << "\n\nPlease Enter your choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
        {
            cout << "\nEnter value to be pushed : ";
            cin >> value;
            push(value);
            break;
        }
        case 2:
        {
            pop();
            break;
        }
        case 3:
        {
            displaystack();
            break;
        }
        case 4:
        {
            topone();
            break;
        }
        case 5:
        {
            cout << "\nExit" << endl;
            break;
        }
        default:
        {
            cout << "\nInvalid Choice!\nPlease make sure you choose correct choice from above given information..";
        }
        }
    } while (choice != 5);
    cout << "\n\n";
    return 0;
}