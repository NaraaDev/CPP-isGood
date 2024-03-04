#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <set>

#define ll long long
#define F first
#define S second
#define pb push_back

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    set<int> s;
    for(int i = 0; i < n; i++) {
        int num;
        cin >> num;
        s.insert(num);
    }
    
    cout << s.size();
    
    

}
/*
Never Give Up
RILY <3
2
*/