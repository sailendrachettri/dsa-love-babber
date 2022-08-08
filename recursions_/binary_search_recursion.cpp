#include <iostream>
using namespace std;

bool binarySearch(int *arr, int start, int end, int key){
    // processing 
    int mid = start + (end - start) / 2;

    // base conditon
    if(start > end) return false;
    if(arr[mid] == key) return true;

    // recursinve calls
    if(arr[mid] < key) return binarySearch(arr, mid+1, end, key);
    else return binarySearch(arr, start, mid-1, key);
}

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int key; cin >> key;
    int size; cin >> size;
    int *arr = new int[size];

    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }

    int start = 0;
    int end = size-1;
    int result = binarySearch(arr, start, end, key);

    if(result) cout << "Found" << endl;
    else cout << "Not found" << endl;

    return 0;
}