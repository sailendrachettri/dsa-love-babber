/* Date: 15 - 07 - 2022
Author: Sailendra */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    map<int, string> m;
    m[1] = "sai";
    m[2] = "len";
    m[13] = "dra";
    m.insert({5, "bheem"});

    for(auto val: m){
        cout<<val.first<<" -> "<<val.second<<endl;
    }cout<<endl;

    // cout<<"present or not: "<<m.count(13)<<endl;
    // cout<<"present or not: "<<m.count(-13)<<endl;

    // m.erase(m.begin());
    // m.erase(5);

    
    // for(auto val: m){
    //     cout<<val.first<<" -> "<<val.second<<endl;
    // }cout<<endl;

    auto it = m.find(5);

    for(auto i = it; i != m.end(); i++){
        cout<<(*i).first<<" "<<(*i).second<<endl; // start with 5 in this case
    }


    return 0;
}