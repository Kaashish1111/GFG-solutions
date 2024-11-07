//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    long subarrayXor(vector<int> &arr, int m) {
        // code here
        int n=arr.size();
        long count=0;
        int prefixXor = 0;
        unordered_map<int, int> xorCount;

        for (int i = 0; i < n; i++) {
            prefixXor ^= arr[i];
        
        // Check if the current prefixXor is equal to the target XOR
            if (prefixXor == m) {
               count++;
            }   

        // Check if there is a prefix with XOR that, when XORed with x, gives prefixXor
            if (xorCount.find(prefixXor ^ m) != xorCount.end()) {
               count += xorCount[prefixXor ^ m];
            }

        // Update the hashmap with the current prefixXor count
            xorCount[prefixXor]++;
        }

        return count;
    }
};

//{ Driver Code Starts.

int main() {
    int tc;
    cin >> tc;
    cin.ignore(); // Ignore the newline after the number of test cases

    while (tc-- > 0) {
        string input;
        getline(cin, input); // Read the whole line for the array

        stringstream ss(input);
        vector<int> arr;
        int num;

        while (ss >> num) {
            arr.push_back(num); // Push numbers into the vector
        }

        int m;
        cin >> m;
        cin.ignore(); // Ignore the newline after m

        Solution obj;
        cout << obj.subarrayXor(arr, m) << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends