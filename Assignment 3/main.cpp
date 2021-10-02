#include "QueueLinkedList.h"
#include "QueueLinkedList.cpp"
#include <iostream>

using namespace std;

int main()
{
    QueueLinkedList<int> list;

    // check queue is empty or not
    if (list.isEmpty())
    {
        cout << "Queue is empty" << endl;
    }
    else
    {
        cout << "Queue is not empty" << endl;
    }

    // insert item
    
    cout<<"Enqueue 5 items: ";

    for (int i = 0; i < 5; i++)
    {
        int x;
        cin>>x;
        list.enQueue(x);
    }
    
    

    // print the queue list
    cout << "display items of the queue: ";
    list.PrintQueue();

    // check queue is empty or not
    if (list.isEmpty())
    {
        cout << "Queue is empty" << endl;
    }
    else
    {
        cout << "Queue is not empty" << endl;
    }
    // dequeue item
    int x;
    list.DeQueue(x);
    cout << "Dequeue item is: " << x << endl;

    // display items
    cout << "After dequeue print Items : ";
    list.PrintQueue();

    return 0;
}
