/* Date: 11 - 07 - 2022
Author: Sailendra */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void printArr(int arr[], int size){
    for(int i = 0; i < size; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}

int getPivot(int arr[], int size){
    int start = 0, end = size-1;

    while(start<end){
        int mid = start + (end-start)/2;

        if(arr[mid] >= arr[0]){
            start = mid+1;

        }else{
            end =  mid;
        }
    }
    return start;
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
    cout<<getPivot(arr, size);


    return 0;
}