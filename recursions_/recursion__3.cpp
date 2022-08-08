#include <iostream>
using namespace std;

bool isSorted(int arr[], int size){
    // base case
    if(size <= 1) return true;

    // processing 
    if(arr[0] > arr[1]) return false;


    // recursive calls
    bool ans = isSorted(arr+1, size-1);
    return ans;

}

int sumOfArray(int *arr, int size){
    int sum = 0;

    // base case
    if(size <= 0) return 0;

    // processing
    sum += arr[0];

    //recursive calls
    sum += sumOfArray(arr+1, size-1);
    return sum;
}

bool linearSearch(int *arr, int size, int key){
    if(size == 0) return false;

    if(arr[0] == key) return true;
    else return linearSearch(arr+1, size-1, key);
}

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    cout << "Let's get started"<<endl;
/*
    // int arr[5] = {8, 4, 3, 9, 10};
    int arr[5] = {3, 4, 7, 7, 7};
    int size = 5;
    bool ans = isSorted(arr, size);
    cout << ans << endl;
*/  
/*
    int size; cin >> size;
    int *arr = new int[size];

    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }

    int sum = sumOfArray(arr, size);
    cout << sum << endl;
*/

    int size; cin >> size;
    int *arr = new int[size];

    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }

    int key = 7;
    int result = linearSearch(arr, size, key);
    
    if(result) cout << "Found" << endl;
    else cout << "Not found" << endl;
    



    return 0;
}