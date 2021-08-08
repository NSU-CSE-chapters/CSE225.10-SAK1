#include <iostream>


#include "QueueType.h"
#include "QueueType.cpp"
using namespace std;
int main() {

    QueueType<int> queueType(5);

    if (queueType.isEmpty()){
        cout<<"Queue is Empty"<<endl;
    }else {
        cout<<"Queue is not Empty"<<endl;
    }

    cout<<"enqueue four items: "<<endl;

    for (int i = 0; i < 4; ++i) {
        int x;
        cin>>x;
        queueType.enqueue(x);
    }
    if (queueType.isEmpty()){
        cout<<"Queue is Empty"<<endl;
    }else {
        cout<<"Queue is not Empty"<<endl;
    }

    if (queueType.isFull()){
        cout<<"Queue is full"<<endl;
    }else {
        cout<<"Queue is not full"<<endl;
    }


    cout<<"enqueue another item: ";
    int x;
    cin>>x;
    queueType.enqueue(x);

    cout<<"display queue: ";


    queueType.display();

    if (queueType.isFull()){
        cout<<"Queue is full"<<endl;
    }else {
        cout<<"Queue is not full"<<endl;
    }

    cout<<"enter another item: ";
    int c;
    cin>>c;
    queueType.enqueue(c);

    queueType.dequeue();
    queueType.dequeue();

    cout<<"after dequeue: ";
    queueType.display();


    queueType.dequeue();
    queueType.dequeue();
    queueType.dequeue();


    if (queueType.isEmpty()){
        cout<<"Queue is Empty"<<endl;
    }else {
        cout<<"Queue is not Empty"<<endl;
    }


    queueType.dequeue();




    return 0;
}
