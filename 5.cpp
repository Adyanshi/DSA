//**------------right rotate array by one place-------------------- */
//{ Driver Code Starts
// Initial Template for C++
/*
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    void rotate(vector<int> &arr) {
        int n = arr.size();
        int temp = arr[n-1];
        for(int i = (n-1); i > 0; i--){
            arr[i]=arr[i-1];
        }
        arr[0]=temp;
    }
};

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
        ob.rotate(arr);
        for (long long i = 0; i < arr.size(); i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends
*/
/*
//Right Rotate array by k places
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> temp(n);
        for(int i = 0; i < n; i++){
            temp[(i+k)%n] = nums[i]; // %  is used so that ans come in range of [0 , n-1]
        }
        nums=temp;
    }
}; 
*/
//------------------left rotate array by one place--------------
#include <bits/stdc++.h> 
#include <vector>
using namespace std;
vector<int> rotateArray(vector<int>& arr, int n) {
    int temp = arr[0];
    for(int i = 1; i < n; i++){
        arr[i-1] = arr[i];
    }
    arr[n-1] = temp;
    return arr;
}

