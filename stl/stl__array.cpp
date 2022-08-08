/* Date: 13 - 07 - 2022
Author: Sailendra */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    array<int, 4> arr = {10, 2, 5, 91};
    int size = arr.size();

    for(int i = 0; i < size; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

    cout<<"at index 2: "<<arr.at(2)<<endl;
    cout<<"empty or not: "<<arr.empty()<<endl;
    cout<<"front element: "<<arr.front()<<endl;
    cout<<"back element: "<<arr.back()<<endl;


    return 0;
}