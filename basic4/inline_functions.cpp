#include <iostream>
using namespace std;

// INLINE function: To reduce the function call overhead

inline void addition(int num1, int num2){
    num1++; num2++;
    cout << num1 << " " << num2 << endl;
}

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int num1 = 10, num2 = 20;
    addition(num1, num2);
    num1++; num2++;

    addition(num1, num2);
    num1++; num2++;
    
    addition(num1, num2);

    return 0;
}