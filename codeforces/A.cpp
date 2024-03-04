#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

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
        int n,m;
        cin >> n >> m;
        cout << "? " << "1 1" << endl;
        int d;
        cin >> d;
        if(d == 0) {
            cout << "! 1 1" << endl;
            continue;
        }

        int plus = (d + 1 > m) ? 1 : 0 + d - m;
        


    }
}
/*
Never Give Up
RILY <3
2 3
1 1
*/