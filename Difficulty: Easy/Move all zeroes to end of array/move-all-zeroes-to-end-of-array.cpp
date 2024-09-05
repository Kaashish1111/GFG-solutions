//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:
	void pushZerosToEnd(int arr[], int n) {
	    // code here
	   int idx = 0;  // Index to place the next non-zero element
        for (int i = 0; i < n; i++) {
            if (arr[i] != 0) {
                arr[idx] = arr[i];  // Move non-zero elements to the front
                idx++;
            }
        }
        // Fill the rest of the array with zeros
        while (idx < n) {
            arr[idx] = 0;
            idx++;
        }
	}
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.pushZerosToEnd(arr, n);
        for (i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends