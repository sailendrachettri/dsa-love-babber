/* Date: 14 - 07 - 2022
Author: Sailendra */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    deque<int> d;

    d.push_back(100);
    d.push_front(50);
    d.push_front(40);
    d.push_front(30);

    for(auto val: d){
        cout<<val<<" ";
    }cout<<endl;

    // d.pop_back();
    // d.pop_front();

    d.erase(d.begin(), d.begin()+3);

    for(auto val: d){
        cout<<val<<" ";
    }cout<<endl;

    cout<<"empty or not: "<<d.empty()<<endl;
    cout<<"front: "<<d.front();
    cout<<" back: "<<d.back()<<endl;

    return 0;
}