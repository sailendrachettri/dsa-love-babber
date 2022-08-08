#include <iostream>
#include <queue>
using namespace std;

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    cout << "Let's get started" << endl << endl;

    queue<int> q;

    q.push(11);
    q.push(15);
    q.push(13);
    q.push(16);

    cout << sizeof(q) << endl;

    // q.pop();
    // q.pop();
    // q.pop();
    // q.pop();
    cout << "size: " << q.size() << endl;
    cout << "isEmpty: " << q.empty() << endl;

    cout << "front: " << q.front() << endl;

    return 0;
}