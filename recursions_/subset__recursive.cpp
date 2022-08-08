#include <iostream>
#include <vector>
using namespace std;

void print2dVector(vector<int> v){
    for(int i = 0; i < v.size(); i++){
            cout << v[i] << " ";
        }
}

void solve(vector<int> nums, vector<int> output, int index, vector<vector<int>> &ans){
    // base case
    if(index >= nums.size()){
        ans.push_back(output);
        return;
    }

    // PROCESSING
    // exclude
    solve(nums, output, index+1, ans);

    // include
    int element = nums[index];
    output.push_back(element);
    solve(nums, output, index+1, ans);
}

vector<vector<int>> subsets(vector<int> &nums){
    vector<vector<int>> ans;
    vector<int> output;
    int index = 0;
    solve(nums, output, index, ans);

    return ans;
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    cout << "Let's get started" <<endl;

    vector<int> v;
    int row;
    cin >> row;
    
    for(int j = 0; j < row; j++){
        int element;
        cin >> element;
        v.push_back(element);
    }

    print2dVector(v);

    vector<vector<int>> result = subsets(v);

    return 0;
}