/*#include <bits/stdc++.h> 
using namespace std;

// Brute force
// just sort the array and return the last element.
// time complexity = O(nlogn)


// optimal 
// time complexit = O(n)
class Solution
{
public:
    int largest(vector<int> &arr, int n)
    {
        int biggest= INT_MIN;
        for(int i =0;i<n;i++){
            biggest=max(biggest,arr[i]);
        }
        return biggest;
    }
};*/
#include <bits/stdc++.h> 
#include <vector>
using namespace std;
class Solution
{
public:
    int largest(vector<int> &arr, int n)
    {
        int max = INT_MIN;
        for(int i = 0; i < n; i++){
            if(arr[i]>max){
                max = arr[i];
            }
        }
        return max;
    }
};