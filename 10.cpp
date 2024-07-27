//intersection of two sorted arrays-----------
//brute force approach
//time complexity O(n*m)
//space complexity O(m)
//first make an array of visited
//then traverse the array and check if the element is visited or not
//if not visited then push it in the result array

//Optimal Solution
//time complexity O(n+m)
//space complexity O(1)

#include <bits/stdc++.h> 
#include <vector>
using namespace std;

vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
	int i = 0 , j = 0;
	vector<int> sol;
	while(i<n && j<m){
		if(arr1[i]<arr2[j]){
			i++;
		}
		else if(arr1[i]>arr2[j]){
			j++;
		}
		else{
			sol.push_back(arr1[i]);
			i++;
			j++;
		}
	}
	return sol;
}