#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

#define ll long long
#define F first
#define S second
#define pb push_back

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    ll MOD = 1e9 + 7;

    ll dp[n + 1];
    

    for(int i = 0; i <= n; i++)
        dp[i] = 0;
    
    dp[1] = 1;

    for(int i = 2; i <= n; i++) {
        for(int j = 1; j <= 6; j++) {
            if(j >= i) break;
            dp[i] += dp[i - j];
        }
        if(i <= 6) dp[i]++;
        dp[i] %=MOD;
    }

    cout << dp[n];
    
}
/*
Never Give Up
RILY <3
4
*/