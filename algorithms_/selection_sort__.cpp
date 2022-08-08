/* Date: 13 - 07 - 2022
Author: Sailendra */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Time complexity
// Best case: O(n^2)
// Worst case: O(n^2)

// good for small size array/vector

void printArr(int arr[], int size){
    for(int i = 0; i < size; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}

void selectionSort(int arr[], int size){
    for(int i = 0; i < size-1; i++){
        int minIndex = i;

        for(int j = i+1; j < size; j++){
            if(arr[j]<arr[minIndex])
                minIndex = j;
        }
        swap(arr[i], arr[minIndex]);
    }
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int size; int arr[100];
    cin>>size;
    for(int i = 0; i < size; i++){
        cin>>arr[i];
    }
    printArr(arr, size);
    selectionSort(arr, size);
    printArr(arr, size);


    return 0;
}