#include <iostream>
using namespace std;

class Stack{
    // properties
    public:
        int *arr;
        int top;
        int size;

    // behaviours (functions)
    Stack(int size){
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element){
        if(size - top > 1){
            top++;
            arr[top] = element;
        }
         else 
            cout << "Stack overflow" << endl;
    }

    void pop(){
        if(top >= 0)
            top--;
        else 
            cout << "Stack underflow" << endl;
    }

    int peek(){
        if(top >= 0)
            return arr[top];
        else {
            cout << "Stack is empty" << endl;
            return -1;
        }
    }

    bool isEmpty(){
        if(top == -1)
            return true;
        else 
            return false;
    }
};

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    cout << "Let's get started" << endl << endl;

    Stack st(5);
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    // st.push(60); // stack overflow - size is 5 only
    
    cout << st.peek() << endl;
    // st.pop();
    cout << st.peek() << endl;
    // st.pop();
    cout << st.peek() << endl;
    // st.pop();
    // cout << st.peek() << endl;
    
    if(st.isEmpty())
        cout << "Stack is empty" << endl;
    else
        cout <<"Stack is not empty" << endl;

    return 0;
}