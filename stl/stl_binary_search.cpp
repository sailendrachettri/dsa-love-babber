/* Date: 15 - 07 - 2022
Author: Sailendra */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void printVector(vector<int> v){
    for(auto val: v){
        cout<<val<<" ";
    }cout<<endl;
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    vector<int> v;
    vector<int> v1;
    v.push_back(1);
    v.push_back(3);
    v.push_back(6);
    v.push_back(9);

    v1.push_back(11);
    v1.push_back(13);
    v1.push_back(16);
    v1.push_back(19);
    
    // printVector(v);
    // printVector(v1);
    // swap(v, v1);
    // printVector(v);
    // printVector(v1);

    // cout<<"find val: "<<binary_search(v.begin(), v.end(), 6)<<endl;
    // cout<<"lower_bound: "<<lower_bound(v.begin(), v.end(), 6)-v.begin()<<endl;
    // cout<<"upper_bound: "<<upper_bound(v.begin(), v.end(), 6)-v.begin()<<endl;

    printVector(v);
    rotate(v.begin(), v.begin()+2, v.end());
    printVector(v);


    return 0;
}