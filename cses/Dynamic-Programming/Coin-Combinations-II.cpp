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

    int MOD = 1e9 + 7;

    int n,x;
    cin >> n >> x;

    int dp[x + 1];

    int coins[n];


    for(int i = 0; i <= x; i++)
        dp[i] = 0;

    for(int i = 0; i < n; i++)
        cin >> coins[i];
    
    for()

    cout << dp[x];

}
/*
Never Give Up
RILY <3
*/