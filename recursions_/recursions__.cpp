#include <iostream>
using namespace std;

int factorial(int num){
    // BASE CASE
    if(num <= 1) return 1;

    // PROCESSING PART(optional)

    // RECURSIVE REALTION
    return (num * factorial(num-1));
}

int power(int num){
    // base case
    if(num == 0) return 1;
    return 2 * power(num-1);
}

void printCounting(int num){
    //base case
    if(num == 0) return;

    // recursive relation
    printCounting(num-1);

    // processing
    cout << num << " ";
}

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    cout << "Let's get started" << endl;

    int num; cin >> num;
    // int ans = factorial(num);
    // int ans = power(num);
    // cout << ans << endl;

    printCounting(num);


    return 0;
}