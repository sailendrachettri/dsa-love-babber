/* Date: 21 - 07 - 2022
Author: Sailendra */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void update(int &n){
    n++;
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

/*
    int num = 101;
    int &num2 = num;

    cout<<num<<" "<<num2<<endl;
    // num++; 
    num2 += 101;
    cout<<num<<" "<<num2<<endl;
*/

    int num = 4;
    cout << num << endl;
    update(num);
    cout << num << endl;


    return 0;
}