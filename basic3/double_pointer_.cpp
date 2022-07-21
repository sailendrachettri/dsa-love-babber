#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int num = 10;
    int *ptr = &num;
    int **ptr2 = &ptr;
/*
    cout<<"ptr: "<<ptr<<endl;
    cout<<"*ptr: "<<*ptr<<endl;
    cout<<"&ptr: "<<&ptr<<endl<<endl;

    cout<<"ptr2: "<<ptr2<<endl;
    cout<<"*ptr2: "<<*ptr2<<endl;
    cout<<"**ptr2: "<<**ptr2<<endl;
*/

    cout<< num <<" "<< (*ptr) <<" "<< (**ptr2)<<endl;
    **ptr2 += 10;
    cout<< num <<" "<< (*ptr) <<" "<< (**ptr2)<<endl;

    return 0;
}