/* Date: 05 - 07 - 2022
Author: Sailendra */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n; cin>>n;
    int row = 1;
    while(row<=n){
        int col = 1;
        char start = 'A' + n - row;
        while(col<=row){
            cout<<start<<" ";
            start++;
            col++;
        }cout<<endl;
        row++;
    }

    return 0;
}