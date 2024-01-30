#include<iostream>
#include<algorithm>

#define ll long long
#define f first
#define s second

using namespace std;

int main() {
    string s;
    cin >> s;

    int ans = 0, preLength = 1, size = s.length();

    for(int i = 1; i < size; i++) {
        if(s[i] == s[i - 1])
            preLength++;
        else {
            ans = max(ans, preLength);
            preLength = 1;
        }
    }

    cout << max(ans, preLength); 

}
/*
Never Give Up
RILY <3
*/