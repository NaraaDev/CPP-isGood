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
        pair<int,int> ans = {-1,-1};
        for(int i = 1; i <= 2; i++) {
            for(int j = 1; j <= 2; j++) {
                cout << "? " << i << j << endl;
                int d;
                cin >> d;
                if(d == 0) {
                    break;
                }
            }
        }

    }
}
/*
Never Give Up
RILY <3
2 3
1 1
*/