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

void uniqueOccurences(int arr[], int size){
    int countOccur[1000];
    int ct = 0;
    
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            if(arr[i]==arr[j]){
                ct++;
            }
        }
        countOccur[i] = ct;
        ct = 0;
    }
    int sz = sizeof(countOccur) / sizeof(int);

    printArr(countOccur, sz);
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
    // uniqueOccurences(arr, size);
    



    

    return 0;
}