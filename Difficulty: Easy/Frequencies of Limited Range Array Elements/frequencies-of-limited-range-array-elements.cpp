//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to count the frequency of all elements from 1 to N in the array.
    void frequencyCount(vector<int>& arr, int N, int P) {
        // do modify in the given array
        
        
        // Initialize a hash vector to store frequencies of elements from 1 to N
        vector<int> hash(N + 1, 0);

        // Count frequencies of elements within range 1 to N
        for (int i = 0; i < N; i++) {
            if (arr[i] >= 1 && arr[i] <= N) {
                hash[arr[i]] += 1;
            }
        }
        
        // Modify original array to store frequencies from hash
        for (int i = 0; i < N; i++) {
            arr[i] = hash[i + 1];
        }
    }
};


//{ Driver Code Starts.

int main() {
    long long t;

    // testcases
    cin >> t;

    while (t--) {

        int N, P;
        // size of array
        cin >> N;

        vector<int> arr(N);

        // adding elements to the vector
        for (int i = 0; i < N; i++) {
            cin >> arr[i];
        }
        cin >> P;
        Solution ob;
        // calling frequncycount() function
        ob.frequencyCount(arr, N, P);

        // printing array elements
        for (int i = 0; i < N; i++)
            cout << arr[i] << " ";
        cout << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends