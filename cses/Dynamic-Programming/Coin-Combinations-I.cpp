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
    ll MOD = 1e9 + 7;
    int n, x;
    cin >> n >> x;

    ll dp[x + 1];
    ll coins[n];

    for(int i = 0; i < n; i++) 
        cin >> coins[i];

    for(int i = 0; i <= x; i++)
        dp[i] = 0;

    for(int i = 1; i <= x; i++) {
        for(int j = 0; j < n; j++) {
            if(coins[j] <= i) {
                dp[i] += dp[i - coins[j]] + (coins[j] == i ? 1 : 0);
                dp[i] %= MOD;
            }
        }
    }

    cout << dp[x];

}
/*
Never Give Up
RILY <3
*/