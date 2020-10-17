#include <iostream>

using namespace std;

//Declare Node
struct Node
{
    int num;
    Node *next;
};

//Declare starting (Head) node
struct Node *head = NULL;

//Insert node at start
void insertNode(int value)
{
    struct Node *newNode = new Node;
    newNode->num = value;
    newNode->next = head;
    head = newNode;
}

void isListEmpty()
{
    if (head == NULL)
    {
        cout << "\nList is empty!" << endl;
        return;
    }
    else
        cout << "\nList is Not Empty!" << endl;
}

void searchNode(int value)
{
    struct Node *temp = head;
    int pos = 0;
    bool found = false;

    while (temp != NULL)
    {
        pos++;
        if (temp->num == value)
        {
            found = true;
            cout << "\nElement " << value << " is found at position " << pos << endl;
            break;
        }
        temp = temp->next;
    }
    if (!found)
    {
        cout << "Element " << value << " not found in the list" << endl;
    }
}
//Traverse/ display all nodes (print items)
void display()
{
    if (head == NULL)
    {
        cout << "List is empty!" << endl;
        return;
    }
    struct Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->num << " ";
        temp = temp->next;
    }
    cout << endl;
}

//delete node from start
void deleteItem()
{
    if (head == NULL)
    {
        cout << "List is empty!" << endl;
        return;
    }
    cout << head->num << " is removed." << endl;
    head = head->next;
}

int main()
{
    int choice;
    int value;

    while (1)
    {
        cout << endl
             << "---------------------------------" << endl;
        cout << endl
             << "Operations on singly linked list" << endl;
        cout << endl
             << "---------------------------------" << endl;
        cout << "1.Insert new node" << endl;
        cout << "2.Delete last inserted Node" << endl;
        cout << "3.Search Element" << endl;
        cout << "4.Display Linked List" << endl;
        cout << "5.IsListEmpty" << endl;
        cout << "6.Exit " << endl;
        cout << "Enter your choice : ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "\nInserting Node at Last, Enter Value: ";
            cin >> value;
            insertNode(value);
            cout << endl;
            break;
        case 2:
            deleteItem();
            break;
        case 3:
            cout << "\nSearch element in Link List: ";
            cin >> value;
            searchNode(value);
            cout << endl;
            break;
        case 4:
            cout << "\nDisplay elements of link list" << endl;
            display();
            cout << endl;
            break;
        case 5:
            isListEmpty();
            cout << endl;
            break;
        case 6:
            cout << "Exiting..." << endl;
            exit(1);
            break;

        default:
            cout << "Wrong choice" << endl;
        }
    }
    return 0;
}
