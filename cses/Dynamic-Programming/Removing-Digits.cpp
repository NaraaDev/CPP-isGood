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

    int dp[n + 1];
    dp[0] = 0;
    for(int i = 1; i <= 9; i++)
        dp[i] = 1;
    for(int i = 10; i <= n; i++) {
        int maxNum = -1, num = i;
        while(num > 0) {
            maxNum = max(maxNum, num % 10);
            num /= 10;
        }
        dp[i] = dp[i - maxNum] + 1;
    }
    cout << dp[n];
}   
/*
Never Give Up
RILY <3
*/