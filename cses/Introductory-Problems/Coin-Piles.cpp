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
        int a,b;
        cin >> a >> b;
        if(a == 0 && b == 0)
            cout << "YES\n";
        else if(a == b || a * 2 < b || b * 2 < a || b == 0 || a == 0)
            cout << "NO\n";
        else
            cout << "YES\n";
    }
}
/*
Never Give Up
RILY <3
*/