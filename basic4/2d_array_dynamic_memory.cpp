#include <iostream>
using namespace std;

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    cout << "Let's get started" << endl;

    int size; cin >> size;

    // 2D array creation
    int **arr = new int *[size];
    for(int i = 0; i < size; i++){
        arr[i] = new int[size];
    }

    // Taking elements as input
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            cin >> arr[i][j];
        }
    }

    // Printing the elements
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            cout << arr[i][j]<<" ";
        } cout << endl;
    }

    return 0;
}