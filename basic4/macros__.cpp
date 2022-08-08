#include <iostream>
using namespace std;

#define PI 3.14

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int radius = 5;
    double area = PI * radius * radius;
    cout << area << endl;

    return 0;
}