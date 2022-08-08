#include <iostream>
#include <deque>
using namespace std;

int solve(int *arr, int n, int k){
    deque<int> maxi(k);
    deque<int> mini(k);

    // addition of first k size window
    for(int i = 0; i < k; i++){
        while(!maxi.empty() and arr[maxi.back()] <= arr[i])
            maxi.pop_back();
        
        while(!mini.empty() and arr[mini.back()] >= arr[i])
            mini.pop_back();
        
        maxi.push_back(i);
        mini.push_back(i);
    }

    int ans = 0;
    for(int i = k; i < n; i++){
        ans += arr[maxi.front()] + arr[mini.front()];

        // removal
        while(!maxi.empty() and i - maxi.front() >= k)
            maxi.pop_front();

        while(!mini.empty() and i - maxi.front() >= k)
            mini.pop_front();

        // addition of first k size window
        while(!maxi.empty() and arr[maxi.back()] <= arr[i])
            maxi.pop_back();
        
        while(!mini.empty() and arr[mini.back()] >= arr[i])
            mini.pop_back();
        
        maxi.push_back(i);
        mini.push_back(i);
    }

    // make sure to consider last window
    ans += arr[maxi.front()] + arr[mini.front()];

    return ans;

}

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    cout << "Let's get started" << endl << endl;

    int arr[7] = {2, 5, -1, 7, -3, -1, -2};
    int k = 4;
    cout << solve(arr, 7, k) << endl; 

    return 0;
}