/* Date: 07 - 07 - 2022
Author: Sailendra */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    // decimal to binary
    // int n; cin>>n;
    // int ans = 0, i = 0;

    // while(n!=0){
    //     int bit = n&1;
    //     ans = (bit * pow(10, i)) + ans; 
    //     n = n >> 1;
    //     i++;
    // }

    // cout<<ans<<endl;

    // binary to decimal
    int n; cin>>n;
    int ans, i;
    ans = i = 0;

    while(n!=0){
        int digit = n % 10;
        if(digit == 1){
            ans = ans + (pow(2, i));
        }
        n = n/10;
        i++;
    }
    cout<<ans<<endl;

    return 0;
}