//-------------left rotate an array by d places --------------
//brute force
#include <bits/stdc++.h>
using namespace std;
/*

void leftRotate(int arr[], int n, int d){
    d = d % n;
    int temp[d];
    for(int i=0;i<d;i++){
        temp[i] = arr[i];
    }
    for(int i=d;i<n;i++){
        arr[i-d] = arr[i];
    }
    for(int i=n-d; i<n; i++){
        arr[i] = temp[i-n+d];
    }
}
//Time complexity : O(n+d)
//SC : O(d)
*/
// optimal approach
//time complexity : O(2n)
//space complexity : O(1) 
/*
void leftRotate(int arr[], int n, int d){
    int n = sizeof(arr)/sizeof(arr[0]);
    reverse(arr, arr+d);
    reverse(arr+d, arr+n);
    reverse(arr, arr+n);
}*/
void leftrotateArray(vector<int>& arr, int k) {
    int n = arr.size();
    k = k % n;
    if (n == 0) return;
    if (k == 0) return;
    reverse(arr.begin(), arr.begin() + k);
    reverse(arr.begin() + k, arr.end());
    reverse(arr.begin(), arr.end());
}
vector<int> rotateArray(vector<int> arr, int k) {
    leftrotateArray(arr, k);
    return arr;
}