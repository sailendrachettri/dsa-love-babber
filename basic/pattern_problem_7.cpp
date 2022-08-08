/* Date: 04 - 07 - 2022
Author: Sailendra */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
/*
A A A A 
B B B B 
C C C C 
D D D D 

*/

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n;
    cin >> n;
    int row = 1;
    char ch = 'A';
    while (row <= n)
    {
        int col = 1;
        while (col <= n)
        {
            // cout << char(ch + row - 1)<<" ";
            // cout << char(ch + col - 1)<<" ";
            cout << char(ch + row + col - 2)<<" ";
            col++;
        }
        cout << endl;
        row++;
    }

    return 0;
}