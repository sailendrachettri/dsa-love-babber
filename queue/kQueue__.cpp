#include <iostream>
using namespace std;

class kQueue{
    private:
        int n;
        int k;
        int *front;
        int *rear;
        int *arr;
        int freespot;
        int *next;
    
    public:
        kQueue(int n, int k){
            this->n = n;
            this->k = k;
            front = new int[k];
            rear = new int[n];
            for(int i = 0; i < k; i++){
                front[i] = -1;
                rear[i] = -1;
            }

            next = new int[n];
            for(int i = 0; i < n; i++){
                next[i] = i+1;
            }
            next[n-1] = -1;

            arr = new int[n];
            freespot = 0;
        }

        void enqueue(int data, int qn){
            // check overflow
            if(freespot == -1){
                cout << "No empty space is available." <<endl;
                return;
            }

            // find first free index
            int index = freespot;

            // update freespot
            freespot = next[index];

            if(front[qn-1] == -1)
                front[qn-1] = index;
            else
                next[rear[qn-1]] = index;

            // update next
            next[index] = -1;

            // update rear
            rear[qn-1] = index;

            // push element
            arr[index] = data;
        }

        int dequeue(int qn){
            // check for underflow
            if(front[qn-1] == -1){
                cout << "Queue underflow." << endl;
                return -1;
            }

            // find index to pop
            int index = front[qn-1];

            front[qn-1] = next[index];

            next[index] = freespot;
            freespot = index;

            return arr[index];
        }
    


};

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    cout << "Let's get started" << endl << endl;

    kQueue k(5, 3);
    k.enqueue(10, 1);
    k.enqueue(15, 1);
    k.enqueue(20, 2);
    k.enqueue(25, 1);

    cout << k.dequeue(1) << endl;
    cout << k.dequeue(2) << endl;
    cout << k.dequeue(1) << endl;
    cout << k.dequeue(1) << endl;
    cout << k.dequeue(1) << endl;

    return 0;
}