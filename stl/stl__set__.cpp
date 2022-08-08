/* Date: 15 - 07 - 2022
Author: Sailendra */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    set<int> s;
    s.insert(4);
    s.insert(14);
    s.insert(14);
    s.insert(9);
    s.insert(9);
    s.insert(5);
    s.insert(5);
    s.insert(5);

    for(auto val: s){
        cout<<val<<" ";
    }cout<<endl;

    set<int>::iterator it = s.begin();
    it++;
    s.erase(it);

    for(auto val: s){
        cout<<val<<" ";
    }cout<<endl;

    cout<<"present or not: "<<s.count(4)<<endl;

    return 0;
}