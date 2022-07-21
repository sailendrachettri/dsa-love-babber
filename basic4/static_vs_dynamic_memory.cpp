#include <iostream>
using namespace std;

int getSum(int *arr, int size){
    int sum = 0;

    for(int i = 0; i <= size; i++){
        sum += arr[i];
    }
    
    return sum;
}

int main(){

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

/*
    // char ch = 'a';
    // cout << ch <<endl;

    char value;

    char *ch = new char;
    ch = &value;

    value = 'a';

    cout << value << endl;
*/

    int size; cin >> size;
    int *arr = new int[size]; // dynamic memory allocation

    for(int i = 0; i <= size; i++){
        cin >> arr[i];
    }

    int sum = getSum(arr, size);
    cout << sum << endl;


    return 0;
}