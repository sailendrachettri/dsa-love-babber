/* Date: 13 - 07 - 2022
Author: Sailendra */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//Time complexity
// Best case: O(n)
// Worst case: O(n^2)

void printArr(int arr[], int size){
    for(int i = 0; i < size; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}

void bubbleSort(int arr[], int size){
    for(int i = 0; i < size-1; i++){
        bool swapped = false;
        // cout<<"step "<<i+1<<endl;
        for(int j = 0; j < size-i; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
                swapped = true;
            }
        }

        if(swapped==false) break;
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
    bubbleSort(arr, size);
    printArr(arr, size);

    return 0;
}