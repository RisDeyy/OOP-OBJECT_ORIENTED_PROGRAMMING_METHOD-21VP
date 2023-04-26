#include "linkedlistQueue.h"

using namespace std;

Node::Node(){
    data = 0;
    next = NULL;
}

Node::Node(int data){
    this -> data = data;
    next = NULL;
}

void LinkedListQueue::init(int cap){
    capacity = cap;
    head = NULL;
    tail = NULL;
    num = 0;
}

bool LinkedListQueue::isEmpty(){
    if (num == 0){
        return true;
    }return false;
}

bool LinkedListQueue::isFull(){
    if (num == capacity){
        return true;
    }return false;
}

void LinkedListQueue::enqueue(int x){
    if (isFull() == true){
        cout << "\nQueue is full!";
    }
    Node *p = new Node(x);
    if (tail == NULL){
        head = tail = p;
    }else{
        tail -> next = p;
        tail = p;
    }num++;
}

void LinkedListQueue::push(int x){
    if (isFull() == true){
        cout << "\nQueue is full!";
    }
    Node *p = new Node(x);
    if (tail == NULL){
        head = tail = p;
    }else{
        p -> next = head;
        head = p;
    }num++;
}

int LinkedListQueue::dequeue(){
    if(isEmpty() == true){
        return -1;
        //cout << "\nQueue is Empty";
    }
    Node *p = head;
    head = head -> next;
    if(head == NULL){
        tail = NULL;
    }num--;

    int result = p -> data;
    delete p;
    return result;
}

int LinkedListQueue::peek(){
    if(isEmpty() == true){
        return -1;
    }return head -> data;
}

void LinkedListQueue::clear(){
    if (isEmpty() == true){
        cout << "\nQueue is Empty";
    }
    if (num != 0){
        dequeue();
    }
}
