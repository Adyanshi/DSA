// find the number that appear once , and other twice
#include<bits/stdc++.h>
using namespace std;
#include<vector>
//brute force
/*
int getSingleElement(vector<int> &arr){
    for(int i=0; i < arr.size(); i++){
        int num = arr[i];
        int cnt = 0;
        for(int j = 0; j < arr.size(); j++){
            if(arr[j] == num){
                cnt++;
            }
        }
        if(cnt == 1){
            return num;
        }
    }
}
*/
//better approach
//using maps
//Total Time complexity: O(NlogM)+O((N/2)+1)   where M=N/2  +  1
//SC: O((N/2)+1)
/* 
#include<map>
int getSingleElement(vector<int> &arr){
    map<long long, int> mp;
    for(int i = 0 ; i < arr.size(); i++){
        mp[arr[i]]++;
    }
    for( auto it: mp ){
        if(it.second == 1){
            return it.first;
        }
    }
}
*/
// Optimal approach
// Total Time Complexity: O(N)  SC: O(1)

int getSingleElement(vector<int> &arr){
	int xorr = 0 ;
    for(int i = 0; i < arr.size(); i++){
        xorr = xorr^arr[i];
    }
    return xorr;	
}
