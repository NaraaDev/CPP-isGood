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
    int q;
    cin >> q;
    string s = "";
    for(int i = 1; i <= 1e7 + 500; i++)
        s += to_string(i);
    
    while(q--) {
        ll pos;
        cin >> pos;
        cout << s[pos - 1] << '\n';
    }
}
/*
Never Give Up
RILY <3
7
4
1
*/