/* Date: 04 - 07 - 2022
Author: Sailendra */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/*
1
23
345
4567

*/

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n;
    cin >> n;
    int row = 1;

    cout<<row<<endl; 
    while (row < n)
    {
        int col = 1;
        while (col <= row+1)
        {
            cout << col+row;
            col++;
        }
        cout << endl;
        row++;
    }

    return 0;
}