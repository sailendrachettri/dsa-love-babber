#include <iostream>
using namespace std;

int factorial(int num){
    // BASE CASE
    if(num <= 1) return 1;

    // PROCESSING PART(optional)

    // RECURSIVE REALTION
    return (num * factorial(num-1));
}

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    cout << "Let's get started" << endl;

    int num; cin >> num;
    int ans = factorial(num);
    cout << ans << endl;

    return 0;
}