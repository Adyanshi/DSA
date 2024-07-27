// linear search 
//brute force
//TC: O(n)
//SC: O(1)
#include<iostream>
#include<vector>
using namespace std;
int linearSearch(int n, int num, vector<int> &arr)
{
     for(int i=0;i<n;i++){
      if (arr[i] == num) {
        return i;
        break;
      }
    }
    return -1;
}
