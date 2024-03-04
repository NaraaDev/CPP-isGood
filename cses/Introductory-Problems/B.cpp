#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <map>

#define ll long long
#define F first
#define S second
#define pb push_back

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;


    while(t--) {
        ll k, n;
        cin >> n >> k;
        ll val = 1;
        
        while(true) {
            ll num = (n - val) / (val * 2) + 1;
            if(k <= num) {
                cout << k * val * 2 - val << '\n';
                break;
            } else {
                k -= num;
            }

            num *= 2;
        }

    }

}
/*
Never Give Up
RILY <3
1
3
5
7
2
6
4
1
27
37
536870912
*/