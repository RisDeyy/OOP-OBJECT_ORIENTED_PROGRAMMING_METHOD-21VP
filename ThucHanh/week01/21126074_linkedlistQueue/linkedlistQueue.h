#include <bits/stdc++.h>
using namespace std;
class Node{
    private:
    public:
        int data;
        Node *next;
        Node();
        Node(int data);
};

class LinkedListQueue{
    private:
        Node *head;
        Node *tail;
        int capacity;
        int num;
    public:
        void init(int capacity);
        void enqueue(int x);
        void push(int x);
        int dequeue();
        int peek();
        bool isEmpty();
        bool isFull();
        void clear();
};