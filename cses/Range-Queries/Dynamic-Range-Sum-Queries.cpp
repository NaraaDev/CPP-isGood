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
    if(l == r) tree[idx] = a[l];
    else {
        int mid = (r + l) / 2;
        build(idx * 2, l, mid, a);
        build(idx * 2 + 1, mid + 1, r, a);
        tree[idx] = tree[idx * 2] + tree[idx * 2 + 1];
    }
}

ll query(int idx, int l, int r, int tl, int tr) {
    if(tl > r || tr < l) return (ll)0;
    if(tl >= l && tr <= r) {
        return tree[idx];
    }

    int mid = (tl + tr) / 2;

    return query(idx * 2, l, r, tl, mid) + query(idx * 2 + 1, l, r, mid + 1, tr);
}

void update(int idx, int l, int r, int u, int pos) {
    if(l == r)
        tree[idx] = u;
    else {
        int mid = (r + l) / 2;
        if(pos <= mid) {
            update(idx * 2, l, mid, u, pos);
        } else{
            update(idx * 2 + 1, mid + 1, r, u, pos);
        }
        tree[idx] = tree[idx * 2] + tree[idx * 2 + 1];
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n,q;
    cin >> n >> q;
    int a[n];

    for(int i = 0; i < n; i++)
        cin >> a[i];

    build(1, 0, n - 1, a);

    while(q--) {
        int x,l,r;
        cin >> x >> l >> r;

        if(x == 2) {
            l--;
            r--;
            cout << query(1, l, r, 0, n - 1) << '\n';
        } else {
            update(1, 0, n - 1, r, l - 1);
        }

    }

}
/*
Never Give Up
RILY <3
14
2
11
*/