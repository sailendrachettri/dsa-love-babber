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

int firstOccurence(int arr[], int size, int key){
    int start = 0, end = size-1;
    int res = -1;

    while(start<=end){
        int mid = start + (end-start)/2;

        if(key==arr[mid]) {
            res = mid;
            end = mid - 1;

        }else if(key > arr[mid]){
            start = mid + 1;

        }else {
            end = mid - 1;
        }
    }
    return res;
}
int lastOccurence(int arr[], int size, int key){
    int start = 0, end = size-1;
    int res = -1;

    while(start<=end){
        int mid = start + (end-start)/2;

        if(key==arr[mid]) {
            res = mid;
            start = mid + 1;

        }else if(key > arr[mid]){
            start = mid + 1;

        }else {
            end = mid - 1;
        }
    }
    return res;
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int arr[100];
    int key; cin>>key;
    int size; cin>>size;
    for(int i = 0; i < size; i++){
        cin>>arr[i];
    }
    printArr(arr, size);

    
    cout<<firstOccurence(arr, size, key)<<" ";
    cout<<lastOccurence(arr, size, key)<<" ";


    return 0;
}