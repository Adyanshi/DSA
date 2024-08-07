//checks if array is sorted and rotated

#include<iostream>
#include<vector>

using namespace std;
/*
class Solution {
public:
    bool check(vector<int>& nums) {
        int count = 0;
        int n = nums.size();
        for(int i = 1; i<n ; i++){
            if(nums[i-1]>nums[i]){
                count++;
            }
        } 
        if(nums[n-1]>nums[0]){
            count++;
        }
        return count <= 1;
    }
};*/

//optimal solution
//checks if array is sorted
int isSorted(int n, vector<int> a) {

    for (int i = 1; i < n; i++) {
      if (a[i] < a[i - 1]) {
        return 0;
      }
    }
    return 1;

}
