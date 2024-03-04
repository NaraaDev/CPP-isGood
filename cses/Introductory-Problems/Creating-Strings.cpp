#include <iostream>
#include <algorithm>
#include <unordered_map>

#define ll long long
#define F first
#define S second

using namespace std;

unordered_map<string, int> m;

void permut(string &s, int l, int r) {
    if(l == r){
        m[s]++;
        return;
    }
    for(int i = l; i <= r; i++) {
        swap(s[l], s[r]);
        permut(s, l + 1, r);
        swap(s[l], s[r]);
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    string s;
    cin >> s;

    permut(s, 0, s.length() - 1);
    cout << m.size() << '\n';
    for(unordered_map<string, int> ::iterator it = m.begin(); it != m.end(); it++)
        cout << (it->first) << '\n';


}
/*
Never Give Up
RILY <3
*/