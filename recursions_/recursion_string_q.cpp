#include <iostream>
using namespace std;

void reverseString(int start, int end, string &str){
    // base case
    if(start > end) return;


    // processing
    swap(str[start], str[end]);
    start++; end--;


    //recursive calls
    reverseString(start, end, str);
}

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    cout << "Let's get started" << endl;

    string str; cin >> str;
    int len = str.size();
    int start = 0;
    int end = len-1;
    
    cout << str << endl;
    reverseString(start, end, str);
    cout << str << endl;


    return 0;
}