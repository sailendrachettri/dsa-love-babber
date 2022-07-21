#include <iostream>
using namespace std;

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    /*

    int arr[10] = {11,22, 33, 44, 55};

    cout<<"*arr: "<<*arr<<endl;
    cout<<"(*arr)+1: "<<(*arr)+1<<endl; // (*arr) is 11 and + 1 = 12
    cout<<"*(arr+1): "<<*(arr+1)<<endl; // (arr+1) is second address i.e and dereferencing it gives value of second address
    cout<<"Address of first memory block is: "<<endl<<arr<<endl;
    cout<<"Address of first memory block is: "<<endl<<&arr[0]<<endl;

    cout<<0[arr]<<endl;
    cout<<1[arr]<<endl;
    cout<<2[arr]<<endl;
    cout<<3[arr]<<endl;
    cout<<4[arr]<<endl;

    */

    int arr[10] = {10, 20, 30, 40};
    cout<<sizeof(arr)<<endl;

    int *ptr = &arr[0];
    cout<<sizeof(ptr)<<endl;
    cout<<sizeof(*ptr)<<endl; // 4 bacause at 0th index value is int 


    return 0;
}