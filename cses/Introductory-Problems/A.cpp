#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <utility>

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
        ll n, k;
        cin >> n >> k;
        vector<pair<ll,ll> > x, y;
        int step = 0;
        ll power[n];

        for(int i = 0; i < n; i++)
            cin >> power[i];
        
        for(int i = 0; i < n; i++) {
            int g;
            cin >> g;
            if(g < 0) {
                pair<ll,ll> p{abs(g), power[i]};
                y.push_back(p);
            }
                
            else
                x.push_back({g,power[i]});
        }

        bool die = false;


        if(die)
            cout << "YES\n";
        else cout << "NO\n";


    }

}
/*
Never Give Up
RILY <3
YES
NO
YES
YES
NO
*/