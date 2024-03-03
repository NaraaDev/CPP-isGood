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

int tree[4 * 200005];

void build(int idx, int l, int r, int a[]) {
    if(l == r) tree[idx] = a[l];
    else {
        int mid = (r + l) / 2;
        build(idx * 2, l, mid, a);
        build(idx * 2 + 1, mid + 1, r, a);
        tree[idx] = min(tree[idx * 2], tree[idx * 2 + 1]);
    }
    
}

int query(int idx, int l, int r, int left, int right) {
    if(r < left || l > right) return INT_MAX;

    if(l >= left && r <= right) {
        return tree[idx];
    }

    int mid = (l + r) / 2;

    return min(query(idx * 2, l, mid, left, right), 
    query(idx * 2 + 1, mid + 1, r, left, right));
    

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
        l--;
        r--;
        cout << query(1, 0, n - 1, l, r) << '\n';
    }
    
}
/*
Never Give Up
RILY <3
2
1
1
4
*/