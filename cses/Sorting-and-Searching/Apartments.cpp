#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <climits>

#define ll long long
#define F first
#define S second
#define pb push_back

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n,m,k;
    cin >> n >> m >> k;
    int a[n], b[m];

    for(int i = 0; i < n; i++)
        cin >> a[i];
    for(int i = 0; i < m; i++)
        cin >> b[i];

    sort(a, a + n);
    sort(b, b + m);
    int ans = 0;
    for(int i = 0; i < m; i++) {
        int low = lower_bound(a, a + n, b[i] - k) - a;
        if(low < n && a[low] >= b[i] - k && b[i] + k >= a[low]) {
            ans++;
            a[low] = -1;
        }
    }

    cout << ans;

}
/*
Never Give Up
RILY <3
*/