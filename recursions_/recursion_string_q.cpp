#include <iostream>
using namespace std;

void reverseString(int start, string &str){
    // int size = str.size();
    // cout << size << endl;
    // cout << str << endl;

    // base case
    if(start > str.size()/2) return;


    // processing
    swap(str[start], str[str.size()-start-1]);
    start++;


    //recursive calls
    reverseString(start, str);
}

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    cout << "Let's get started" << endl;

    string str; cin >> str;
    int len = str.size();
    int start = 0;

    cout << str << endl;
    reverseString(start, str);
    cout << str << endl;


    return 0;
}