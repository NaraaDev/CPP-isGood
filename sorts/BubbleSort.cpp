#include<iostream>

using namespace std;

int main() {

    int nums[] = {3,4,1,2,-1,0,6,7};

    bool swapped = false;

    do {

        swapped = false;

        for(int i = 1; i < sizeof(nums) / sizeof(int); i++) {
            if(nums[i] < nums[i - 1]) {
                swap(nums[i], nums[i - 1]);
                swapped = true;
            }
        }

    }   while(swapped);

    for(int i = 0; i < sizeof(nums) / sizeof(int); i++) {
        cout << nums[i] << ' ';
    }

}
/*
    Bubble sort O(N^2);
*/