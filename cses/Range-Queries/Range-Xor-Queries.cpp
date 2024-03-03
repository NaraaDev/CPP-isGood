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

ll tree[200005 * 4];

void build(int idx, int l, int r, int a[]) {
    if(l == r)
        tree[idx] = a[l];
    else {
        int mid = (l + r) / 2;
        build(idx * 2, l, mid, a);
        build(idx * 2 + 1, mid + 1, r, a);

        tree[idx] = (tree[idx * 2 + 1] ^ tree[idx * 2]);
    }
}

ll query(int idx, int l, int r, int tl, int tr) {
    if(l > tr || tl > r) return 0;
    if(l >= tl && r <= tr) return tree[idx];
    else {
        int mid = (l + r) / 2;
        return (query(idx * 2, l , mid, tl, tr) ^ query(idx * 2 + 1, mid + 1, r, tl, tr));
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, q;
    cin >> n >> q;

    int a[n];

    for(int i = 0; i < n; i++)
        cin >> a[i];

    build(1, 0, n - 1, a);

    while(q--) {
        int l, r;
        cin >> l >> r;
        cout << query(1, 0, n - 1, l - 1 , r - 1) << '\n';
    }

}
/*
Never Give Up
RILY <3
3
0
6
4
*/