/* Date: 08 - 07 - 2022
Author: Sailendra */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int getMin(int arr[], int size){
    int min = INT_MAX;
    
    for(int i = 0; i < size; i++){
        if(min>arr[i]){
            min = arr[i];
        }
    }
    return min;
}
int getMax(int arr[], int size){
    int max = INT_MIN;
    
    for(int i = 0; i < size; i++){
        if(max<arr[i]){
            max = arr[i];
        }
    }
    return max;
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    // int arr[1000];
    // int size = sizeof(arr)/ sizeof(arr[0]);
    // fill_n(arr, 1000, 1);
    // cout<<arr[10];

    // for(int i = 0; i < size; i++){
    //     arr[i] = -1;
    // }
    // cout<<arr[100];


    int size; cin>>size;
    int arr[1000];

    for(int i = 0; i < size; i++){
        cin>>arr[i];
    }

    int min = getMin(arr, size);
    int max = getMax(arr, size);

    cout<<"min-> "<<min<<" & max-> "<<max<<endl;
    // cout<<"min-> "<<*min_element(arr, arr+size)<<" & max-> "<<*max_element(arr, arr+size)<<endl;
    cout<<max(10, 30)<<" "<<min(39, 43);

    return 0;
}