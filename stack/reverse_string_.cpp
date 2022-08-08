#include <iostream>
#include <stack>
using namespace std;

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    cout << "Let's get started" << endl << endl;

    string str; cin >> str;
    cout << str << endl;

    stack<char> strStack;

    for(int i = 0; i < str.size(); i++){
        strStack.push(str[i]);
    }

    string reversedString = "";

    while(!strStack.empty()){
        reversedString.push_back(strStack.top());
        strStack.pop();
    }

    cout << reversedString << endl;



    return 0;
}