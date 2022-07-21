#include <iostream>
using namespace std;

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    cout << "Let's get started" << endl;
/*
    // ---------------------SAME ROWS AND COLS---------------------
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
*/

    int row, col;
    cin >> row >> col;

    // 2D array creation
    int **arr = new int *[row];
    for(int i = 0; i < row; i++){
        arr[i] = new int[col];
    }


    // Taking elements as input
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cin >> arr[i][j];
        }
    }

    // Printing the elements
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cout << arr[i][j]<<" ";
        } cout << endl;
    }

    // free-up the HEAP memory
    for(int i = 0; i < row; i++){
        delete []arr[i];
    }

    delete []arr; 

    return 0;
}