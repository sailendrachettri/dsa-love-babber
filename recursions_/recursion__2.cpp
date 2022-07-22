#include <iostream>
using namespace std;

void reachHome(int src, int desc){
    // processing
    cout << "source " << src << " destination " << desc << endl;

    // base case
    if(src >= desc){
        cout << "reached home" << endl;
        return;
    }

    src = src + 1;

    // recursive calls
    reachHome(src, desc);

}

int fibonacci(int num){
    if(num == 0) return 0;
    if(num == 1) return 1;

    return fibonacci(num - 1) + fibonacci(num - 2); 
}

void sayNumber(int num, string arr[]){
    // base case
    if(num == 0) return;

    // processing
    int digit = num % 10;
    num = num / 10;

    // recursive calls
    sayNumber(num, arr);
    cout << arr[digit] << " ";
}

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    cout << "Let's get started" << endl;
/*
    int src = 1;
    int desc = 10;

    reachHome(src, desc);

    int num; cin >> num;
    cout<<fibonacci(num);
*/

    string arr[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    int num; cin >> num;
    sayNumber(num, arr);

    return 0;
}