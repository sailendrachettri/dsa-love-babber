/* Date: 04 - 07 - 2022
Author: Sailendra */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/*
1 2 3 4 
1 2 3 4 
1 2 3 4 
1 2 3 4 


*/

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n;
    cin >> n;

    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << n-j+1 << " ";
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}