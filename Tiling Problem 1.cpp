#include<iostream>
#include<bits/stdc++.h>

using namespace std;
long long int N = 100000;

int main()
{

    int n ;
    cin >> n;
    int dp[N];
    for(int i = 1; i <= N; i++)
    {
        dp[i] = 0;
    }
    dp[1] = 1;
    dp[2] = 2;
    for(int i = 3; i <= n; i++)
    {
        dp[i] = dp[i-1] + dp[i-2];
    }
    cout<< dp[n];






}

