#include<iostream>
#include<algorithm>

#define ll long long
#define f first
#define s second

using namespace std;

int main() {
    
    int n;
    cin >> n;
    ll res = 1;

    ll MOD = 1e9 + 7;

    for(int i = 1; i <= n; i++) {
        res *= 2;
        res %= MOD;
    }

    cout << res << '\n';

}
/*
Never Give Up
RILY <3
*/