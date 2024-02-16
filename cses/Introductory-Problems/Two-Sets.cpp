#include<iostream>
#include<algorithm>
#include<vector>

#define ll long long
#define f first
#define s second

using namespace std;

int main() {
    
    int n;
    cin >> n;

    if(n == 3) {
        cout << "YES\n";
        cout << 2 << '\n' << "1 2" << '\n';
        cout << 1 << '\n' << "3";
    }
    else if(n < 3) {
        cout << "NO";
    }
    else {
        ll sum = n * (n + 1) / 2;
        if(sum & 1)
            cout << "NO\n";
        else {

            vector<int> firstSet, secondSet;

            if(n & 1) {
                firstSet.push_back(1);
                firstSet.push_back(2);
                secondSet.push_back(3);
                bool pushFirst = true;
                int left = 4, right = n;
                while(left < right) {
                    if(pushFirst) {
                        firstSet.push_back(left++);
                        firstSet.push_back(right--);
                        pushFirst = false;
                    } else {
                        pushFirst = true;
                        secondSet.push_back(left++);
                        secondSet.push_back(right--);
                    }   
                }

            } else {
                bool pushFirst = true;
                int left = 1, right = n;
                while(left < right) {
                    if(pushFirst) {
                        firstSet.push_back(left++);
                        firstSet.push_back(right--);
                        pushFirst = false;
                    } else {
                        pushFirst = true;
                        secondSet.push_back(left++);
                        secondSet.push_back(right--);
                    }   
                }
            }
            cout << "YES\n";
            cout << firstSet.size() << '\n';
            for(int i = 0; i < firstSet.size(); i++)
                cout << firstSet[i] << ' ';
            cout << "\n" << secondSet.size() << '\n';
            for(int i = 0; i < secondSet.size(); i++)
                cout << secondSet[i] << ' ';
            
        }
    }

}
/*
Never Give Up
RILY <3
*/