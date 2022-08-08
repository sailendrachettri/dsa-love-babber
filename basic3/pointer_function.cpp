/* Date: 21 - 07 - 2022
Author: Sailendra */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void print(int *p){
    cout<< p <<" --> " << *p <<endl;
}

void update(int *p){
    // p = p + 1;
    (*p) = (*p) + 2;
}

// int getSum(int arr[], int size){
int getSum(int *arr, int size){
    cout<<"size of arr in function: "<<sizeof(arr)<<endl;

    int sum = 0;
    for(int i = 0; i < size; i++){
        sum = sum + i[arr];
    }
    return sum;
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
/*
    int value = 5;
    int *ptr = &value;

    print(ptr);
    update(ptr);                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        
    print(ptr);
*/

    int arr[5] = {2, 5, 8, 9, 10};
    // int sum = getSum(arr, 5);
    int sum = getSum(arr+3, 2); // [start index = 3 to end index 5 i.e == 2 indxes]
    cout<<"sum of the values: "<<sum<<endl;



    return 0;
}