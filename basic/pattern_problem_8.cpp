/* Date: 05 - 07 - 2022
Author: Sailendra */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/*
A 
B B 
C C C 
D D D D 

*/

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n;
    cin >> n;
    int row = 1;
    while (row <= n)
    {
        int col = 1;
        while (col <= row)
        {
            cout << char('A' + row - 1)<<" ";
            col++;
        }
        cout << endl;
        row++;
    }

    return 0;
}