#include<iostream>

using namespace std;

int main() {

    int nums[] = {3,4,1,2,-1,0,6,7};

    int size = sizeof(nums) / sizeof(int);

    for(int i = 1; i < size; i++) {
        int selectedIndex = i, sortedIndex = i - 1;
        while(nums[selectedIndex] < nums[sortedIndex] && sortedIndex >= 0) {
            swap(nums[selectedIndex--], nums[sortedIndex--]);
        }
        /*
            Other wise
            int key = arr[i], sortedIndex = i - 1;
            while(sortedIndex >= 0 && key < arr[i]) {
                arr[sortedIndex + 1] = arr[i];
                sortedIndex--;
            }
            arr[sortedIndex] = key;
        */
    }
   

    for(int i = 0; i < size; i++) {
        cout << nums[i] << ' ';
    }
}
/*
    Insertion sort O(N^2);
*/