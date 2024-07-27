//maximum consecutive ones
#include<bits/stdc++.h>
using namespace std;
int findConsecutiveOnes(vector<int> &nums){
    int maxi = 0;
    int con = 0;
    for(int i = 0; i < nums.size(); i++){
        if(nums[i] == 1){
            con++;
            maxi = max(maxi, con);
        }
        else{
            con = 0;
        }
    }
    return maxi;
}