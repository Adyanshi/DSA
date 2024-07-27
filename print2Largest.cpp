/*
#include <bits/stdc++.h>
using namespace std;

// brute force
// first sort the array then "largert = arr[n-1]"
// time complexity = O(nlogn) for sorting O(n) for findind.......O(n+nlogn)
for (int i = n - 2; i >= 0; i--)
{
    if (arr[i] != largest)
    {
        second_largest = arr[i];
        break;
    }
}

// better
//  time complexity = O(n)+O(n) = O(2n)
int largest = arr[0];
for (int i = 0; i < n; i++)
{
    if (arr[i] > largest)
    {
        largest = arr[i];
    }
}
int second_largest = -1;
for (int i = 0; i < n; i++)
{
    if (arr[i] != largest && arr[i] > second_largest)
    {
        second_largest = arr[i];
    }
}*/

//optimal approach
//TC : O(n)
#include <iostream>
#include <vector>
#include <sstream> 
using namespace std;

class Solution {
    public:
    // Function returns the second
    // largest elements
    int print2largest(vector<int> &arr) {
        int n = arr.size();
        int largest = arr[0];
        int slargest = -1;
        for(int i = 1; i < n ; i++){
            if(arr[i] > largest){
                slargest = largest;
                largest = arr[i];
            }
            else if(arr[i]<largest && arr[i]>slargest){
                slargest = arr[i];
            }
        }
        return slargest;
    }
};
/*
//second smallest elements
int secondSmall(vector<int> arr, n)
{
    int smallest = arr[0];
    int second_smallest = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < smallest)
        {
            second_smallest = smallest;
            smallest = arr[i];
        }
        else if (arr[i] < second_smallest && arr[i] > smallest)
        {
            second_smallest = arr[i];
        }
    }
    return second_smallest;
}
*/

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution ob;
        int ans = ob.print2largest(arr);
        cout << ans << endl;
    }
    return 0;
}

// } Driver Code Ends