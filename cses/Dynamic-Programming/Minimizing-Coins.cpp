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

    int n, x;
    cin >> n >> x;
    
    int coins[n];

    for(int i = 0; i < n; i++)
        cin >> coins[i];

    int dp[x + 1];
    for(int i = 0; i <= x; i++)
        dp[i] = 1e9;

    dp[0] = 0;
    
    for(int i = 1; i <= x; i++) {
        for(int j = 0; j < n; j++) {
            if(coins[j] <= i) {
                dp[i] = min(dp[i], dp[i - coins[j]] + 1);
            }
                
        }
    }

    cout << (dp[x] == 1e9 ? -1 : dp[x]);

}
/*
Never Give Up
RILY <3
*/