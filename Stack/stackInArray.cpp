#include<iostream>
using namespace std;

class Stack{
    public:
    int  *arr;
    int top;

    Stack(int size){
        arr=new int[size];
        top=-1;
    }

    void push(int val){
        arr[++top]=val;
    }

    void pop(){
        if(top==-1){
            cout<<"Stack is empty"<<endl;
            return;
        }
        top--;
    }

    int peek(){
        if(top==-1){
            cout<<"Stack is empty"<<endl;
            return -1;
        }
        return arr[top];
    }

    bool isEmpty(){
        return top==-1;
    }

    bool isFull(){
        return top==sizeof(arr)/sizeof(arr[0])-1;
    }

    void display(){
        for(int i=0;i<=top;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }


};

int main(){
    Stack s(5);
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.display();
    s.pop();
    s.display();
    cout<<s.peek()<<endl;
    cout<<s.isEmpty()<<endl;
    cout<<s.isFull()<<endl;
    return 0;
}