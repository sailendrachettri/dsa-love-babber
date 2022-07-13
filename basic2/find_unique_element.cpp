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

int findUniqueElement(int arr[], int size){
    int res = 0;
    for(int i = 0; i < size; i++){
        res = res ^ arr[i];
    }
    return res;
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
    int res = findUniqueElement(arr, size);
    (res != -1)? cout<<"unique: "<<res : cout<<"Not found";
    

    return 0;
}