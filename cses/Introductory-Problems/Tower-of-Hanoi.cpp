#include <iostream>
#include <algorithm>
#include <cmath>

#define ll long long
#define f first
#define s second

using namespace std;


void hanoi(int a, int b, int c, int n) {

    if( n <= 0) return;

    hanoi(a, c, b, n - 1);
    cout << a << ' ' << b << '\n';
    hanoi(c, b, a, n - 1);

}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    cout << (1 << n) - 1 << '\n';
    hanoi(1, 3, 2, n);

}
/*
Never Give Up
RILY <3
3
1 2
1 3
2 3
*/