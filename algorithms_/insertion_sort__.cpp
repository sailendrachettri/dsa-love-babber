/* Date: 13 - 07 - 2022
Author: Sailendra */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int size){
    for(int i = 0; i < size-1; i++){
        int temp = arr[i];
        int j = i-1;
        for(; j >= 0; j--){
            if(arr[j] > temp){
                arr[j+1] = arr[j];

            }else{
                break;
            }
        }
        arr[j+1] = temp;
    }
}

void printArr(int arr[], int size){
    for(int i = 0; i < size; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
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
    insertionSort(arr, size);
    printArr(arr, size); 

    return 0;
}