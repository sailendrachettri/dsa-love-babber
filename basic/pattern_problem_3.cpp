/* Date: 04 - 07 - 2022
Author: Sailendra */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n; cin>>n;

    int i, count;
    i = count = 1;

    while(i<=n){
        int j = 1;
        while(j<=i){
            cout<<count<<" ";
            j++; count++;
        }cout<<endl;
        i++; 
    }

    return 0;
}