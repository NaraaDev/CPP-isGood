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

int tree[200005 * 4];

void build(int idx, int l, int r, int a[]) {
    if(l == r)
        tree[idx] = a[l];
    else {
        int mid = (l + r) / 2;
        build(idx * 2, l, mid, a);
        build(idx * 2 + 1, mid + 1, r, a);
        tree[idx] = min(tree[idx * 2], tree[idx * 2 + 1]);
    }
}
/*
if(tl > r || tr < l) return (ll)0;
    if(tl >= l && tr <= r) {
        return tree[idx];
    }
*/
int query(int idx, int l, int r, int tl, int tr) {
    if(l > tr || r < tl) return INT_MAX;
    if(l >= tl && r <= tr)
        return tree[idx];
    
    int mid = (r + l) / 2;

    return min(query(idx * 2, l, mid, tl, tr), query(idx * 2 + 1, mid + 1, r, tl, tr));

}

void update(int idx, int l, int r, int pos, int val) {
    if(l == r)
        tree[idx] = val;
    else {
        int mid = (l + r) / 2;
        if(pos <= mid) 
            update(idx * 2, l, mid, pos, val);
        else
            update(idx * 2 + 1, mid + 1, r, pos, val);
        tree[idx] = min(tree[idx * 2], tree[idx * 2 + 1]);
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
        int x, l, r;
        cin >> x >> l >> r;

        if(x == 1)
            update(1, 0, n - 1, l - 1, r);
        else
            cout << query(1, 0, n - 1, l - 1, r - 1) << '\n';
    }

}
/*
Never Give Up
RILY <3
2
1
3
*/