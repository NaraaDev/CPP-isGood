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
    int n,m;
    cin >> n >> m;
    int a[n];

    for(int i = 0; i < n; i++)
        cin >> a[i];
    
    int ans = 0;

    sort(a, a + n);
    int currentSum = 0;

    for(int i = n - 1; i >= 0; i--) {
        currentSum += a[i];
        if(currentSum > m) {
            currentSum = a[i];
            ans++;
        }
        if(currentSum == m) {
            currentSum = 0;
            ans++;
        }
    } 
    if(currentSum != 0) {
        ans++;
    }
    cout << ans;
}
/*
Never Give Up
RILY <3
3
*/