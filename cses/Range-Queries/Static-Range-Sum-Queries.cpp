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

    int n,q;
    cin >> n >> q;

    int a[n];

    for(int i = 0; i < n; i++)
        cin >> a[i];

    ll prefix[n + 1];
    prefix[0] = 0;

    for(int i = 0; i < n; i++)
        prefix[i + 1] = prefix[i] + a[i];
    
    while(q--) {
        int l, r;
        cin >> l >> r;
        cout << prefix[r] - prefix[l - 1] << '\n';
    }

}
/*
Never Give Up
RILY <3
11
2
24
4
*/