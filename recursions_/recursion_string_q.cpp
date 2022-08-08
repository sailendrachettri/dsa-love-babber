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

bool checkPalindrome(string str, int start){

    // cout << str << endl;
    // cout << start << endl;

    // base case
    if(str[start] != str[str.size()-start-1])
        return false;

    if(start > (str.size()/2)) 
        return true;

    // processing
    start++;

    // recursive calls
    return checkPalindrome(str, start);
}

int powerOfNumber(int base, int expo){
    // base case
    if(expo == 0) return 1;
    if(expo == 1) return base;

    // processing

    // recursive calls
    int ans = powerOfNumber(base, expo/2);

    if(expo%2 == 0) return (ans*ans); // if even
    else return (base * ans * ans);
}

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    cout << "Let's get started" << endl;
/*
    string str; cin >> str;
    int len = str.size();
    int start = 0;

    cout << str << endl;
    reverseString(start, str);
    cout << str << endl;

*/
/*

    string str; cin >> str;
    int start = 0;
    bool result = checkPalindrome(str, 0);
    if(result)
        cout << "Palindrome" << endl;
    else    
        cout << "Not palindrome" << endl;
*/

    int base, expo;
    cin >> base >> expo;

    int result = powerOfNumber(base, expo);
    cout << result << endl;

    return 0;
}