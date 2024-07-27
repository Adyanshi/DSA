//missing number 
//brute force 
//O(n^2) time complexity(hypothetical or worst case scenario)
#include <bits/stdc++.h>
using namespace std;
/*
int missingNumber(vector<int>&a, int N) {
for(int i =1; i<=N; i++){
    int flag = 0;
    for(int j=0;j<N-1; j++){
        if(a[j] == i){
            flag = 1;
            break;
        }
    }
    if(flag == 0){
        return i;
    }
}
}

//better solution (using hashing)
//TC : O(N)+O(N)
//SC : O(N)

int missingNumber(vector<int>&a, int N) {
    int hash[N+1] = {0};
    for(int i = 0; i<N-1; i++){
        hash[a[i]]=1;
    }
    for(int i = 1; i<N; i++){
        if(hash[i]==0){
            return i;
        }
    }
}
*/

//Optimal Solution
//1. using Sum of n numbers 
//TC: O(N)
//SC: O(1)
// sum of numbers in array
// and then substracting both of them 
//the difference will be the missing number
//but this method is not suitable for large numbers and long keyword will take slightly more space 

// 2. XOR Approach
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int ans =0;
        for(int i =1;i<=n;i++){
            ans = ans ^ i;
        }
        for(int i =0;i<nums.size();i++){
            ans= ans^nums[i];
        }
        return ans;
    }
};
//TC: O(2N)
//SC: O(1)
// this can be optimised in better way >>>>


//TC: O(N)
//SC: O(1)

int missingNumber(vector<int>&a, int N) {
    int xor1 = 0 , xor2 = 0;
    int n = N-1;
    for(int i = 0 ; i < n; i++){
        xor1 = xor1 ^ (i+1);
        xor2 = xor2 ^ a[i];
    }
    xor1 = xor1 ^ N;
    return xor1 ^ xor2;
}