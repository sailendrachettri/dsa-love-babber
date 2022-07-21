#include <iostream>
#include <bits/stdc++.h>
using namespace std;


void update(int **ptr){
    ptr = ptr + 1;
    // (**ptr) = (**ptr) + 1;
}

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


    cout<< num <<" "<< (*ptr) <<" "<< (**ptr2)<<endl;
    **ptr2 += 10;
    cout<< num <<" "<< (*ptr) <<" "<< (**ptr2)<<endl;

*/

    cout<<num<<endl;
    update(ptr2);
    cout<<num<<endl;

    return 0;
}