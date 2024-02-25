#include <iostream>
#include <algorithm>
#define ll long long
#define f first
#define s second

using namespace std;

int words[26];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    string s;
    cin >> s;
    
    string permutation = "";

    for(int i = 0; i < s.size(); i++)
        words[s[i] - 'A']++;

    bool ans = true, oneOdd = true;

    for(int i = 0; i < 26; i++) {
        if(!oneOdd && words[i] & 1)
            ans = false;
        if(words[i] & 1)
            oneOdd = false;
    }

    if(ans) {
        pair<char, int> oddWord;
        oddWord.f = 'a';
        oddWord.s = 0;
        for(int i = 0; i < 26; i++) {
            if(words[i] != 0 && words[i] % 2 == 0) {
                for(int j = 0; j < words[i] / 2; j++)
                    permutation += (i + 'A');
            }
            if(words[i] & 1) {
                oddWord.f = (i + 'A');
                oddWord.s = words[i];
            }
        }
        string result = permutation;
        for(int i = 0; i < oddWord.s; i++)
            result += oddWord.f;
        reverse(permutation.begin(), permutation.end());
        result += permutation;

        cout << result;

    } else
        cout << "NO SOLUTION";


}
/*
Never Give Up
RILY <3
*/