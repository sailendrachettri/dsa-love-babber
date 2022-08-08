/* Date: 19 - 07 - 2022
Author: Sailendra */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int countPrime(int n){
    int count = 0;

    if(n <=1 ) return -1;

    for(int num = 2; num < n; num++){
        bool flag = true;
        for(int i = 2; i <= sqrt(num); i++){
            if(num%i == 0){
                flag = false;
                break;
            }
        }
        if(flag){
            count++;
            cout<<num<<" ";
        }
    }

    return count;
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    // prime number less than n
    int n; cin>>n;
    int count = countPrime(n);
    cout<<endl<<count<<endl;



    return 0;
}