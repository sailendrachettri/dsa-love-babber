/* Date: 15 - 07 - 2022
Author: Sailendra */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void printArr(int arr[], int size){
    for(int i = 0; i < size; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}

void reverseArray(int arr[], int size){
    int start = 0, end = size-1;
    while(start<=end){
        swap(arr[start], arr[end]);
        start++; end--;
    }
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
    reverseArray(arr, size);
    printArr(arr, size);

    return 0;
}