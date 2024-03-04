#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

#define ll long long
#define F first
#define S second
#define pb push_back

const int MAXN = 110;

int dp[MAXN][MAXN];
int ans = 1e9;
using namespace std;



int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n = 1;
    while(n != 0) {
        cin >> n;
        int a[n];
        for(int i = 0; i < n; i++)
            cin >> a[i];

        int prefix[n + 1];
        prefix[0] = 0;
        for(int i = 1; i < n; i++)
            prefix[i] = prefix[i - 1] + a[i - 1];

        solve(a, prefix, 0, n);

        cout << ans << '\n';
    }
    

}
/*
Never Give Up
RILY <3
*/