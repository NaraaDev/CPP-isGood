#include<iostream>
#include<algorithm>

#define ll long long
#define f first
#define s second

using namespace std;

int main() {
    
    ll n;
    cin >> n;
    int result = 0;

    while(n >= 5) {
        result += n / 5;
        n /= 5;
    }

    cout << result;

}
/*
Never Give Up
RILY <3
*/