/* Date: 04 - 07 - 2022
Author: Sailendra */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    char val; cin>>val;

    if(val>='a' and val<='z') cout<<"small case";
    else if(val>='A' and val <='Z') cout<<"upper case";
    else if(val>='0' and val<='9') cout<<"number";
    else cout<<"symbol";

    return 0;
}