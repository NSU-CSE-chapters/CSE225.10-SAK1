#include "QueType.h"
#include "QueType.cpp"
#include "StackType.h"
#include "StackType.cpp"
#include <iostream>

using namespace std;

int main() {
    QueType<int> list;
    //number of nodes
    cout << "Enter N of even length: ";
    int n;
    cin >> n;


    // insert in the queue
    cout << "Input: ";

    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        list.Enqueue(x);
    }


    QueType<int> firstHalf;
    QueType<int> secondHalf;
    QueType<int> output;

    for (int i = 0; i < n / 2; i++) {
        int x;
        list.Dequeue(x);
        firstHalf.Enqueue(x);
    }

    for (int i = n / 2; i < n; i++) {
        int x;
        list.Dequeue(x);
        secondHalf.Enqueue(x);
    }



    // interleaving the first half of the queue with the second half
    for (int i = 0; i < n / 2; ++i) {
        int f, l;
        firstHalf.Dequeue(f);
        output.Enqueue(f);
        secondHalf.Dequeue(l);
        output.Enqueue(l);
    }

    // output
    cout<<"Output: ";
    output.display();
    return 0;
}
