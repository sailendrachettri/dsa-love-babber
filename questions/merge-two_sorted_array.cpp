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

void merge(int arr1[], int size1, int arr2[], int size2, int arr3[]){
    int i = 0, j = 0, k = 0;

    while(i<size1 and j<size2){
        if(arr1[i] < arr2[j]){
            arr3[k++] = arr1[i++];
        
        }else {
            arr3[k++] = arr2[j++];
        }
    }

    while(i<size1){
        arr3[k++] = arr1[i++];
    }

    while(j<size2){
        arr3[k++] = arr2[j++];
    }
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    
    int arr1[100];
    int size1; cin>>size1;
    for(int i = 0; i < size1; i++){
        cin>>arr1[i];
    }
    printArr(arr1, size1);

    int arr2[100];
    int size2; cin>>size2;
    for(int i = 0; i < size2; i++){
        cin>>arr2[i];
    }
    printArr(arr2, size2);

    int arr3[100];


    sort(arr1, arr1+size1);
    sort(arr2, arr2+size2);

    merge(arr1, size1, arr2, size2, arr3);
    int size3 = size1+size2;    
    printArr(arr3, size3);

    return 0;
}