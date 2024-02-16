#include <iostream>
#include <algorithm>

#define ll long long
#define f first
#define s second

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--) {
        ll a,b;
        cin >> a >> b;
        if((a == 0 && b != 0) || (b == 0 && a != 0))
            cout << "NO\n";
        else if((a + b) % 3 == 0 && min(b,a) * 2 >= max(a, b))
            cout << "YES\n";
        else
            cout << "NO\n";
    }

}
/*
Never Give Up
RILY <3
*/