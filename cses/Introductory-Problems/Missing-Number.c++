#include<iostream>
#include<algorithm>

#define ll long long
#define f first
#define s second

using namespace std;

int main() {

    int n, num;
    cin >> n;
    ll sum = n * 1ll * (n + 1) / 2;
    for(int i = 0; i < n - 1; i++) {
        cin >> num;
        sum -= num;
    }    
    cout << sum;
}
/*
Never Give Up
RILY <3
*/