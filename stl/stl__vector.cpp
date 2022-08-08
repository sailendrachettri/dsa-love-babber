/* Date: 14 - 07 - 2022
Author: Sailendra */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

/*
    vector<int> v;
    cout<<"capacity: "<<v.capacity();
    cout<<" size: "<<v.size()<<endl;

    v.push_back(10);
    cout<<"capacity: "<<v.capacity();
    cout<<" size: "<<v.size()<<endl;

    v.push_back(30);
    cout<<"capacity: "<<v.capacity();
    cout<<" size: "<<v.size()<<endl;

    v.push_back(50);
    // cout<<"capacity: "<<v.capacity();
    // cout<<" size: "<<v.size()<<endl;

    // cout<<"front: "<<v.front();
    // cout<<" back: "<<v.back();
    // cout<<" at: "<<v.at(2)<<endl;

    for(int i = 0; i < v.size(); i++){
        cout<<v[i]<<" ";
    }cout<<endl;

    // v.pop_back();

    // v.clear();
    // cout<<"capacity: "<<v.capacity();
    // cout<<" size: "<<v.size()<<endl;
    

    for(int i = 0; i < v.size(); i++){
        cout<<v[i]<<" ";
    }cout<<endl;

*/

    vector<int> v(5, -1);
    cout<<"capacity: "<<v.capacity()<<endl;

    for(int i = 0; i < v.size(); i++){
        cout<<v[i]<<" ";
    }cout<<endl;

    v.push_back(10);
    cout<<"capacity: "<<v.capacity()<<endl;

    vector<int> copy_v(v);
    for(int i = 0; i < v.size(); i++){
        cout<<copy_v[i]<<" ";
    }cout<<endl;


    return 0;
}