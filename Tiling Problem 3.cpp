#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int dp[100000];

int main()
{
    long long int N = 100000;
    int n ;
    cin >> n;
    int dp[N];
    for(int i = 1; i <= N; i++)
    {
        dp[i] = 0;
    }
    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 6;
    for(int i = 4;i <= n;i++){
        dp[i] = dp[i-1] + dp[i-2] + 3*dp[i-3];
    }
    cout<<dp[n];


}
