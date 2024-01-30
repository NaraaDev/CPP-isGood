#include<iostream>
#include<algorithm>

#define ll long long
#define f first
#define s second

using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];

    for(int i = 0; i < n; i++)
        cin >> a[i];

    ll ans = 0;

    for(int i = 1; i < n; i++) {
        if(a[i] < a[i - 1]) {
            ans += (a[i - 1] - a[i]);
            a[i] = a[i - 1];
        }   
    }

    cout << ans;

}
/*
Never Give Up
RILY <3
*/