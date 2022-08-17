#include <iostream>
#include <vector>
using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    cout << "Let's get started" << endl << endl;

    vector<int> vec;
    int size; cin >> size;
    while(size--)
    {
        int val;
        cin >> val;
        vec.push_back(val);
    }

    return 0;
}