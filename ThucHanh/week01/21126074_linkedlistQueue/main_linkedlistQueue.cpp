#include "linkedlistQueue.h"

using namespace std;

int main(){
    LinkedListQueue q;
    q.init(6);
    //q.push(1);
    //q.push(2);
    //q.push(3);
    q.push(4);
    q.push(5);

    q.enqueue(9);

    if (q.dequeue() == -1){
        cout << "\nQueue is Empty";
    }else{
        cout << "\n" << q.dequeue();
    }

    if (q.peek() == -1){
        cout << "\nQueue is Empty";
    }else{
        cout << "\n" << q.peek();
    }

    cout << endl;
    q.clear();

    if (q.isFull() == true){
        cout << "\nQueue is Full";
    } else {
        cout << "\nQueue isn't Full";
    }

    if (q.isEmpty() == true){
        cout << "\nQueue is Empty";
    } else {
        cout << "\nQueue isn't Empty";
    } 

}