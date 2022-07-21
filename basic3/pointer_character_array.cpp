/* Date: 21 - 07 - 2022
Author: Sailendra */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
/*
    int arr[10] = {1, 2, 9, 10};
    char ch[6] = "abcde";

    // cout<<arr<<endl;
    // cout<<ch<<endl;

    char *c = &ch[0];
    // cout<<c<<endl;
    // cout<<*c<<endl;
*/

    char temp = 'a';
    char *ptr = &temp;
    cout<<*ptr<<endl;
    cout<<ptr<<endl;

    return 0;
}