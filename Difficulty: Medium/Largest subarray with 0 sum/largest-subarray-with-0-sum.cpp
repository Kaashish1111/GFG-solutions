//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*You are required to complete this function*/

// Brute Force ->time limit exceed
// class Solution {
//   public:
//     int maxLen(vector<int>& arr) {
//         // code here
//         int n=arr.size();
//         int maxi=INT_MIN;
//         int sum=0;
//         for(int i=0;i<n;i++){
//             for(int j=i+1;j<n;j++){
//                 sum += arr[j];
//                 if(sum==0){
//                     maxi=max(j+1-i,maxi);
//                 }
//             }
//         }
//         return maxi;
//     }
// };

// optimal approch
class Solution {
public:
    int maxLen(vector<int>& arr) {
        int n = arr.size();
        unordered_map<int, int> sumIndexMap; // Map to store the first occurrence of each cumulative sum
        int maxi = 0;
        int sum = 0;

        for (int i = 0; i < n; i++) {
            sum += arr[i]; // Update cumulative sum

            // If sum is 0, then subarray from 0 to i has a zero sum
            if (sum == 0) {
                maxi = i + 1;
            }

            // If this cumulative sum has been seen before, it means there's a zero-sum subarray
            if (sumIndexMap.find(sum) != sumIndexMap.end()) {
                maxi = max(maxi, i - sumIndexMap[sum]);
            } else {
                // Store the index of the first occurrence of this cumulative sum
                sumIndexMap[sum] = i;
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
    }

    return 0;
}

// } Driver Code Ends