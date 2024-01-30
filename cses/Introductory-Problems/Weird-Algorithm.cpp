#include<iostream>
#include<algorithm>

#define ll long long
#define f first
#define s second

using namespace std;

int main() {
    ll n;
    cin >> n;
    while(n != 1) {
        cout << n << ' ';
        if(n & 1) {
            n = n * 3 + 1;
        }
        else 
            n /= 2;
    }
    cout << 1;
}
/*
Never Give Up
RILY <3
*/