#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

#define ll long long
#define f first
#define s second


using namespace std;

string numberToBit(int num, int len = 0) {

    string bits = "";
    while(num > 0) {
        bits += to_string(num % 2);
        num /= 2;
    }
    reverse(bits.begin(), bits.end());

    while(bits.length() < len)
        bits = "0" + bits;

    return bits;

}

int countOne(int num) {
    int count = 0;

    string bit = numberToBit(num);

    for(int i = 0; i < bit.length(); i++)
        count += (bit[i] == '1');
    return count;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    
    if(n == 1)
        cout << "1" << "\n" << "0";
    else {  
        vector<string> gray;
        gray.push_back("0");
        gray.push_back("1");
        
    }
}
/*
Never Give Up
RILY <3
*/