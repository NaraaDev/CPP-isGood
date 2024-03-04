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

    int n, x, ans = 0;
    cin >> n >> x;
    int a[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];

    sort(a, a + n);

    int left = 0, right = n - 1;
    
    while(left <= right) {
        if(a[left] + a[right] <= x)
            left++;
        right--;
        ans++;
    }

    cout << ans;


}
/*
Never Give Up
RILY <3
3
*/