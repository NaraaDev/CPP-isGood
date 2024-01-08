#include<iostream>

using namespace std;

int main() {

    int nums[] = {3,4,1,2,-1,0,6,7};

    for(int i = 0; i < sizeof(nums) / sizeof(int) - 1; i++) {
        int minNumberPosition = i;
        for(int j = i + 1; j < sizeof(nums) / sizeof(int); j++) {
            if(nums[minNumberPosition] > nums[j]) {
                minNumberPosition = j;
            }
        }
        swap(nums[i], nums[minNumberPosition]);
    }
   

    for(int i = 0; i < sizeof(nums) / sizeof(int); i++) {
        cout << nums[i] << ' ';
    }

}
/*
    Bubble sort O(N^2);
*/