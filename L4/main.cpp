

#include "UnsortedType.h"
#include "UnsortedType.cpp"
#include "studentInfo.h"
#include "studentInfo.cpp"
#include<bits/stdc++.h>

using namespace std;

int main() {

    UnsortedType<int> unsortedType;

    unsortedType.InsertItem(5);
    unsortedType.InsertItem(7);
    unsortedType.InsertItem(6);
    unsortedType.InsertItem(9);

    cout << "display: " << endl;

    unsortedType.GetNextItem();


    cout << "length is: " << unsortedType.LengthIs() << endl;


    unsortedType.InsertItem(1);
    cout << "after inserting 1: ";

    unsortedType.GetNextItem();

    unsortedType.RetrieveItem(4);
    unsortedType.RetrieveItem(5);
    unsortedType.RetrieveItem(9);
    unsortedType.RetrieveItem(10);


    if (unsortedType.IsFull()) {
        cout << "list is full " << endl;
    } else {
        cout << "list is not full" << endl;
    }

    unsortedType.DeleteItem(5);
    if (unsortedType.IsFull()) {
        cout << "list is full " << endl;
    } else {
        cout << "list is not full" << endl;
    }


    unsortedType.DeleteItem(1);
    unsortedType.GetNextItem();

    unsortedType.DeleteItem(6);


    unsortedType.GetNextItem();





}






//#include <iostream>
//
//using namespace std;
//
//class Queue
//{
//private:
//    int *qu;
//    int size;
//    int front;
//    int rear;
//
//public:
//    Queue();
//    Queue(int);
//    void enqueue(int);
//    int dequeue();
//    bool isFull();
//    bool isEmpty();
//    void display();
//
//};
//
//Queue::Queue()
//{
//    size = 7;
//    qu = new int[7];
//    front = -1;
//    rear = -1;
//}
//
//Queue::Queue(int size)
//{
//    this->size = size;
//    qu = new int[size];
//    front = -1;
//    rear = -1;
//}
//
//bool Queue::isEmpty()
//{
//    if (front == rear)
//    {
//        return true;
//    }
//    else
//        return false;
//}
//
//bool Queue::isFull()
//{
//    if (rear == size - 1)
//    {
//        return true;
//    }
//    else
//        return false;
//}
//
//void Queue::enqueue(int x)
//{
//    if (!isFull())
//    {
//
////        rear++;
//        qu[rear++] = x;
//    }
//    else
//    {
//        cout << "queue is full" << endl;
//    }
//}
//
//int Queue::dequeue()
//{
//    if (isEmpty())
//    {
//        cout << "queue is empty" << endl;
//    }
//    else
//    {
//        front++;
//        return qu[front];
//    }
//}
//
//void Queue::display()
//{
//
//    for (int i = front; i < rear; i++)
//    {
//        cout << qu[i] << " ";
//    }
//
//    cout << endl;
//}
//
//int main(int argc, char const *argv[])
//{
//    Queue q(7);
//    q.enqueue(1);
//    q.enqueue(2);
//    q.enqueue(3);
//    q.enqueue(4);
//
//    q.display();
//
//
//    return 0;
//}
//
//
