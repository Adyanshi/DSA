//move zeroes to end----------
/*
brute force approach :
1. traverse the array
2. if element is a non zero number, add it in a new array named temp
3. add all the zeroes in the end of the array
*/

//optimal approach

#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i =0;
        for(int j = 0 ; j < nums.size(); j++){
            if(nums[j] != 0)
            {
                swap(nums[j], nums[i]);
                i++;
            }
        }
    }
};