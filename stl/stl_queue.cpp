/* Date: 15 - 07 - 2022
Author: Sailendra */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    queue<string> q;
    q.push("sai");
    q.push("len");
    q.push("dra");

    cout<<"front: "<<q.front()<<endl;
    cout<<"back: "<<q.back()<<endl;

    cout<<"size: "<<q.size()<<endl;
    q.pop();
    cout<<"size: "<<q.size()<<endl;

    return 0;
}