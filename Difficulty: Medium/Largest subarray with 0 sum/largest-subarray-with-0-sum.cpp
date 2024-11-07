//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*You are required to complete this function*/
// brute
// class Solution {
//   public:
//     int maxLen(vector<int>& arr) {
//         // code here
//         int n=arr.size();
//         int maxi=0;
//         for(int i=0;i<n;i++){
//             int sum=0;
//             for(int j=i;j<n;j++){
//                 sum += arr[j];
//                 if(sum==0){
//                     maxi=max(j+1-i,maxi);
//                 }
//             }
//         }
//         return maxi;
//     }
// };
// best
class Solution {
  public:
    int maxLen(vector<int>& arr) {
        // code here
        unordered_map<int, int> mpp; 
        int maxi = 0;
        int sum = 0; 

        for(int i = 0; i < arr.size(); i++) {
          sum += arr[i]; 

           if (sum == 0) {
               maxi = i + 1;  // The whole subarray from 0 to i has a sum of 0
            }
            else {
               if (mpp.find(sum) != mpp.end()) {
                   maxi = max(maxi, i - mpp[sum]);  // Find the length of the subarray with sum = 0
                }
                else {
                   mpp[sum] = i;  // Store the index of this sum
                }
            }   
        }
        return maxi; 
    }
};



//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // to ignore the newline after the integer input
    while (t--) {
        int n;
        vector<int> a;
        string input;

        // Input format: first number n followed by the array elements
        getline(cin, input);
        stringstream ss(input);
        int num;
        while (ss >> num)
            a.push_back(num);

        Solution obj;
        cout << obj.maxLen(a) << endl;
        cout << "~\n";
    }

    return 0;
}

// } Driver Code Ends