#include <iostream>
#include <stack>
using namespace std;

void printData(stack<int> s){
    int size = s.size();
    for(int i = 0; i < size; i++){
        cout << s.top() << " ";
        s.pop();
    } cout <<endl;
}

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    cout << "Let's get started" << endl << endl;

/*
    // stack creation
    stack<int> s;

    // inserting data
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);

    // removing element
    // s.pop();
    // s.pop();
    // s.pop();
    // s.pop();

    printData(s);

    if(s.empty())
        cout << "Stack is empty." << endl;
    else 
        cout << "Stack is full." << endl;

    cout << "Size of stack is " << s.size() << endl;
*/ 



    return 0;
}