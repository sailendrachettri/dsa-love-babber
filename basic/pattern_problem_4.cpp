/* Date: 04 - 07 - 2022
Author: Sailendra */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int row;
    cin >> row;
    int i = 1;

    while (i <= row)
    {
        int j = 1;
        while (j <= i)
        {
            cout << i<<" ";
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}