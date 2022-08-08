/* Date: 18 - 07 - 2022
Author: Sailendra */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int getLength(char name[]){
    int count = 0;
    for(int i = 0; name[i] != '\0'; i++){
        count++;
    }
    return count;
}

void reverseArray(char name[], int size){
    int start = 0, end = size-1;
    while(start<=end){
        swap(name[start++], name[end--]);

    }
}

bool checkPanindrome(char name[], int size){
    int start = 0, end = size-1;
    while(start<end){
        if(name[start++] != name[end--]) return false;
    }
    return true;
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    char name[20];
    cin>>name;
    string s; cin>>s;
    name[2] = '\0';
    s[2] = '\0';
    cout<<name<<endl;
    cout<<s<<endl;
    int len = getLength(name);
    // cout<<checkPanindrome(name, len);
    // reverseArray(name, len);
    // cout<<"reversed: "<<name<<endl;

    return 0;
}