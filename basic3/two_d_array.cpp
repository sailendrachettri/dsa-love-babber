/* Date: 18 - 07 - 2022
Author: Sailendra */


#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool isPresent(int arr[3][4], int target, int row, int col){
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            if(arr[i][j]==target) return true;
        }
    }
    return false;
}

void print2DArr(int arr[3][4], int row, int col){
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cout<<arr[i][j]<<" ";
        }cout<<endl;
    }cout<<endl;
}

void rowWiseSum(int arr[3][4], int row, int col){
    for(int i = 0; i < row; i++){
        int sum = 0;
        for(int j = 0; j < col; j++){
            sum += arr[i][j];
        }
        cout<<"sum for "<<i<<"th row: "<<sum<<endl;
    }
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int row, col; cin>>row>>col;
    int arr[3][4];

    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cin>>arr[i][j];
        }
    }

    print2DArr(arr, row, col);

    // int target = 50;
    // cout<<target<<" is present or not: "<<isPresent(arr, target, row, col);

    rowWiseSum(arr, row, col);


    return 0;
}