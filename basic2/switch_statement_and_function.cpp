/* Date: 07 - 07 - 2022
Author: Sailendra */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int nCr(int val){
    int fact1 = 1;
    for(int i = 1; i <= val; i++){
        fact1 = fact1 * i;
    }
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    // int num1, num2;
    // char op;
    // cin>>num1>>num2>>op;

    // switch(op){
    //     case '+': cout<<num1+num2<<endl; 
    //         break;
    //     case '-': cout<<num1-num2<<endl; 
    //         break;
    //     case '/': cout<<num1/num2<<endl; 
    //         break;
    //     case '*': cout<<num1*num2<<endl; 
    //         break;
    //     case '%': cout<<num1%num2<<endl; 
    //         break;
    // } 

    // question 1
    // int amount; cin>>amount;
    // int notes;

    // switch(1){ 
    //     case 1: {
    //         if(amount>=100){
    //             notes = amount/100;
    //             amount = amount%100;
    //             // cout<<amount<<endl;
    //             cout<<notes<<" 100s"<<endl;
    //         }
    //     }
    //     case 2: {
    //         if(amount>=50){
    //             notes = amount/50;
    //             amount = amount%50;
    //             cout<<notes<<" 50s"<<endl;
    //         }
    //     }
    //     case 3: {
    //         if(amount>=20){
    //             notes = amount/20;
    //             amount = amount%20;
    //             cout<<notes<<" 20s"<<endl;
    //         }
    //     }
    //     case 4: {
    //         if(amount>=10){
    //             notes = amount/10;
    //             amount = amount%10;
    //             cout<<notes<<" 10s"<<endl;
    //         }
    //     }
    // }

    // value of ncr 
    int val; cin>>val;
    int ans = nCr(val);

    return 0;
}