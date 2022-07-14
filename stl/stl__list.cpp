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
    list<int> l;
    cout<<"size: "<<l.size()<<endl;
    
    l.push_back(10);
    l.push_front(40);
    l.push_front(30);
    l.push_front(5);

    for(auto val: l){
        cout<<val<<" ";
    }cout<<endl;
    cout<<"size: "<<l.size()<<endl;

    l.erase(l.begin());

    for(auto val: l){
        cout<<val<<" ";
    }cout<<endl;
    cout<<"size: "<<l.size()<<endl;

*/

    list<int> l(10, -1);
    for(auto val: l){
        cout<<val<<" ";
    }cout<<endl;
    cout<<"size: "<<l.size()<<endl;

    // l.push_back(100);

    list<int> copy_l(l);
    for(auto val: l){
        cout<<val<<" ";
    }cout<<endl;
    cout<<"size: "<<l.size()<<endl;



    return 0;
}