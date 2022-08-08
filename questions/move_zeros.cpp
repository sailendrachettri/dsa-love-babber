/* Date: 16 - 07 - 2022
Author: Sailendra */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void printArr(int arr[], int size){
    for(int i = 0; i < size; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}

void move_zeros(int arr[], int size){
    int i = 0;
    for(int j = 0; j < size; j++){
        if(arr[j] != 0){
            swap(arr[i], arr[j]);
            i++;
        }
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
    move_zeros(arr, size);
    printArr(arr, size);

    return 0;
}