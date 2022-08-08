/* Date: 10 - 07 - 2022
Author: Sailendra */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void printArr(int arr[], int size){
    for(int i = 0; i < size; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}

int binary_search(int arr[], int size, int key){
    int start = 0, end = size-1;

    while(start<=end){
        int mid = start + (end - start) / 2;

        if(key==arr[mid]) return mid;

        else if(key > arr[mid]){
            start = mid + 1;

        }else{
            end = mid - 1;
        }
    }
    return -1;
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int arr[100];
    int size; cin>>size;
    for(int i = 0; i < size; i++){
        cin>>arr[i];
    }
    printArr(arr, size);

    int key = 19;
    cout<<binary_search(arr, size, key);

    

    return 0;
}