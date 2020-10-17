#include <iostream>
using namespace std;

struct CQueue
{
    // Front: Get the front item from queue.
    // Rear: Get the last item from queue.
    int rear, front;

    int size;   //set queue memory size
    int *arr;   //store reference of next node/value 

    CQueue(int s)
    {
        front = rear = -1;  //both initially empty
        size = s;      
        arr  = new int[s]; 
    }

    void insertCQ(int value);
    void deleteCQ();
    void traverseCQ();
};

void CQueue::insertCQ(int value)
{
    //In a circular queue, the new element is always inserted at Rear position.
    if ((front == 0 && rear == size-1) || 
        (rear == (front-1)%(size-1)))
    {
        cout<<"\nQueue is Full.";
        return;
    }
    else if (front == -1)
    {
        front = rear = 0;
        arr[rear] = value;
    }
    else if (rear == size-1 && front !=0)
    {
        rear = 0;
        arr[rear] = value;
    }
    else
    {
        rear++;
        arr[rear] = value;
    }
}

void CQueue::deleteCQ()
{
    if (front == -1)
    {
        cout<<"\nQueue is Empty.\n";
        return;
    }
    cout<<"Element deleted from queue is : "<<arr[front]<<endl;

    if (front == rear) {
      front = -1;
      rear = -1;
   } else {
      if (front == size - 1)
      front = 0;
      else
      front = front + 1;
   }
}

void CQueue::traverseCQ()           //for displaying queue elements
{
    if (front == -1)
    {
        cout<<"\nQueue is empty.";
        return;
    }
    cout<<"\nQueue elements are : ";
    if (rear >= front)
    {
        for (int i = front; i <= rear; i++)
            cout<<arr[i]<<" ";
    }
    else
    {
        for (int i = front; i <= size; i++)
            cout<<arr[i]<<" ";
        for (int i =0; i <= rear; i++)
            cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    CQueue q(5);

    int ch, val;
    cout<<"1)Insert\n";
    cout<<"2)Delete\n";
    cout<<"3)Display\n";
    cout<<"4)Exit\n";

do {
   cout<<"\nEnter choice : "<<endl;
   cin>>ch;
   switch(ch) {
      case 1: 
         cout<<"Input for insertion: "<<endl;
         cin>>val;
         q.insertCQ(val);
         break;
         
      case 2: 
         q.deleteCQ();
         break;
         
      case 3: 
         q.traverseCQ();
         break;
         
      case 4: 
         cout<<"Exit\n";
         break;
         default: cout<<"Incorrect!\n";
   }
} while(ch != 4);
   return 0;
}