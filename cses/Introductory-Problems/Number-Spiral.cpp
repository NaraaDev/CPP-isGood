#include<iostream>
#include<algorithm>

#define ll long long
#define f first
#define s second

using namespace std;

int main() {

    int t;
    cin >> t;

    while(t--) {
        int x,y;
        cin >> x >> y;
        if(x == y) 
            cout << x * 1ll *(y - 1) + 1 << '\n';
        else if(x > y) {
            if(x & 1)
                cout << ((x - 1) * 1ll * (x - 1) + 1) + (y - 1) << '\n';
            else
                cout << (x * 1ll * x) - (y - 1) << '\n';
            
        } else {
            if(y & 1) 
                cout << (y * 1ll * y) - (x - 1) << '\n';
            else
                cout << ((y - 1) * 1ll * (y - 1) + 1) + (x - 1) << '\n';
            
        }
    }
}
/*
Never Give Up
RILY <3
*/