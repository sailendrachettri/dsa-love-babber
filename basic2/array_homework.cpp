/* Date: 07 - 07 - 2022
Author: Sailendra */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int arr[100];
    int size; cin>>size;
    int sum = 0;
    for(int i = 0; i < size; i++){
        cin>>arr[i];
    }

    // for(int i = 0; i < size; i++){
    //     sum += arr[i];
    // }
    // cout<<sum;


    for(int i = 1; i < (size/2); i++){
        swap(arr[i], arr[size-i-1]);
    }

    for(int i = 0; i < size; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;




    return 0;
}