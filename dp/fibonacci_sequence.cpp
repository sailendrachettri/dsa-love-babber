#include<bits/stdc++.h>
using namespace std;

int fib(int n, vector<int> &dp)
{
    if(n <= 1)
        return n;
    
    if(dp[n] != -1)
        return dp[n];
    
    dp[n] = fib(n-1, dp) + fib(n-2, dp);
    
    return dp[n];                                   
}                                                                                                                                                                                           

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    cout << "Let's get started" << endl << endl;
    
    int n; cin >> n;
    vector<int> dp(n+1);
    
    for(int i = 0; i <= n; i++)
        dp[i] = -1;
    
    cout << fib(n, dp) << endl;
    
    return 0;
}