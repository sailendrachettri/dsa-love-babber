/* Date: 09 - 07 - 2022
Author: Sailendra */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void printArr(int arr[], int size){
    for(int i = 0; i < size; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}

void swapAlternate(int arr[], int size){
    for(int i = 0; i < size; i+=2){
        if(i+1 < size)
            swap(arr[i], arr[i+1]);
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
    swapAlternate(arr, size);
    printArr(arr, size);

    return 0;
}