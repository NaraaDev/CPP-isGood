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
    int a[n];
    ll sum = 0;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
    }
    ll ans = sum;
    for(int i = 0; i < (1 << n); i++) {
        int bit = i, select = 0;
        ll currSum = 0;
        while(bit > 0) {
            if(bit & 1)
                currSum += a[select];
            select++;
            bit >>= 1;
        }
        if(select != n) {
            ans = min(ans, abs((sum - currSum) - currSum));
        }
    }
    
    cout << ans;

}
/*
Never Give Up
RILY <3
1
*/