/* Date: 06 - 07 - 2022
Author: Sailendra */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int a,b; cin>>a>>b;

    cout << "a&b: " << (a & b) << endl;
    cout << "a|b: " << (a | b) << endl;
    cout << "~a: " << (~a) << endl;
    cout << "a^b: " << (a ^ b) << endl;

    return 0;
}