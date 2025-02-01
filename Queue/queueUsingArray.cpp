#include<iostream>
#include<queue>
using namespace std;

class Queue {
    public:
    int *arr;
    int front, rear, size;
    Queue(int val){
        arr = new int[val];
        front = rear = -1;
    }

    void push(int val){
        if(rear == size-1){
            cout<<"Queue is full"<<endl;
            return;
        }
        if(front == -1){
            front++;
        }
        arr[++rear] = val;
    }

    void pop(){
        if(front == -1){
            cout<<"Queue is empty"<<endl;
            return;
        }
        if(front == rear){
            front = rear = -1;
        }
        else{
            front++;
        }
    }

    int peek(){
        if(front == -1){
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        return arr[front];
    }

};