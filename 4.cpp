//remove duplicates brute force
#include <iostream>
#include <vector>
#include<set>
using namespace std;
/*
void removeDuplicates(vector<int> &arr){
    set<int> st;
    int n = arr.size();
    for(int i = 0; i< n;i++){
        st.insert(arr[i]);
    }
    int index=0;
    for (auto it : st){
        arr[index] = it;
        index++;
    }
}
//nlogn + n
// SC: O(n)*/

//optimal approach(2 pointer approach)
int removeDuplicates(vector<int> &arr){
    int n = arr.size();
    int i = 0;
    for(int j = 1; j<n;j++){
        if(arr[i] != arr[j]){
            arr[i+1]=arr[j];
            i++;
        }
    }
    return i+1;
}
