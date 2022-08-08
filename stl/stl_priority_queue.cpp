/* Date: 15 - 07 - 2022
Author: Sailendra */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    priority_queue<int> maxi; // max heap
    maxi.push(1);
    maxi.push(3);
    maxi.push(2);
    maxi.push(0);

    int size = maxi.size();
    for(int i = 0; i < size; i++){
        cout<<maxi.top()<<" ";
        maxi.pop();
    }cout<<endl;

    priority_queue<int, vector<int>, greater<int>> mini; // min heap
    mini.push(1);
    mini.push(3);
    mini.push(2);
    mini.push(0);

    size = mini.size();
    for(int i = 0; i < size; i++){
        cout<<mini.top()<<" ";
        mini.pop();
    }cout<<endl;


    return 0;
}