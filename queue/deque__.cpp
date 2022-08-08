#include <iostream>
#include <deque>
using namespace std;

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    cout << "Let's get started" << endl << endl;

    deque<int> d;

    d.push_front(10);
    d.push_back(20);

    d.pop_front();
    d.pop_back();

    if(d.empty()){
        cout << "Deque is empty." << endl;
    } else {
        cout << "Deque is not empty." << endl;        
    }
    cout << d.front() << endl;
    cout << d.back() << endl;

    return 0;
}