/* Date: 15 - 07 - 2022
Author: Sailendra */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    stack<string> s;
    s.push("sai");
    s.push("len");
    s.push("dra");

    // cout<<"top: "<<s.top()<<endl;
    // s.pop();
    // cout<<"top: "<<s.top()<<endl;

    cout<<"size: "<<s.size()<<endl;
    cout<<"empty: "<<s.empty()<<endl;

    return 0;
}