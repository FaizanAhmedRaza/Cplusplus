//Doubly linked List
#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *prev;
    node *next;
};

class doubly_linklist
{
    node *head, *tail;

public:
    doubly_linklist()
    {
        head = NULL;
        tail = NULL;
    }
    node *getnode();
    void insbeg();
    void inslst();
    void delbeg();
    void dellst();
    void disp();
};

node *doubly_linklist::getnode()
{
    node *newnode;
    newnode = new node;
    cout << "Enter data: ";
    cin >> newnode->data;
    newnode->next = NULL;
    newnode->prev = NULL;
    return (newnode);
}

void doubly_linklist::insbeg()
{
    node *temp;
    temp = getnode();
    if (head == NULL)
    {
        head = tail = temp;
    }
    else
    {
        temp->next=head;
        head->prev=temp;
        head= temp;
    }
    cout<<head->data<<" is inserted.\n";
}

void doubly_linklist::inslst()
{
    node *temp;
    temp = getnode();
    if(head==NULL)
    {
        head = tail =temp;
    }
    else{
        tail->next=temp;
        temp->prev=tail;
        tail=temp;
    }
    cout<<tail->data<<" is inserted.\n";
}

void doubly_linklist::delbeg()
{
    if(head==NULL)
    {
        cout<<"Empty List!\n";
    }
    else
    {
        cout<<head->data<<" is deleted.\n";
        if(head ==tail)
        {
            head = tail = NULL;
        }
        else
        {
            node *temp;
            temp = head;
            head=head->next;
            head->prev=NULL;
            delete temp;
        }
    }
}

void doubly_linklist::dellst()
{
    if(head==NULL)
    {
        cout<<"Empty List!\n";
    }
    else
    {
        cout<<tail->data<<" is deleted.\n";
        if(head ==tail)
        {
            head = tail = NULL;
        }
        else
        {
            node *temp;
            temp = tail;
            tail=tail->prev;
            tail->next=NULL;
            delete temp;
        }
    }
}

void doubly_linklist::disp()
{
    if(head == NULL)
    {
        cout<<"Empty List!\n";
    }
    else
    {
        node *temp=head;
        cout<<"The Elements in the list are: ";
        while(temp!=NULL)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }
    }
}

int main()
{
    doubly_linklist d;
    
    int ch, val;
    cout<<"1)Insert at Begining\n";
    cout<<"2)Insert at Last\n";
    cout<<"3)Delete at Begining\n";
    cout<<"4)Delete at Last\n";
    cout<<"5)Display\n";
    cout<<"6)Exit\n";

do {
   cout<<"\n\nEnter choice : "<<endl;
   cin>>ch;
   switch(ch) {
      case 1: 
         d.insbeg();
         break;
         
      case 2: 
         d.inslst();
         break;
         
      case 3: 
         d.delbeg();
         break;

      case 4: 
         d.dellst();
         break;

      case 5: 
         d.disp();
         break;

      case 6: 
         cout<<"Exit.\n";
         break;
         default: cout<<"Incorrect!\n";
   }
} while(ch != 6);
    return 0;
}

