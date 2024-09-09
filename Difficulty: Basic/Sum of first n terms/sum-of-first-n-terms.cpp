//{ Driver Code Starts
// Initial template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    long long sumOfSeries(long long n) {
        // code here
        // Base case: when n reaches 1, the sum is 1^3 = 1
        if (n == 0)
            return 0;
        // Recursive case: return n^3 + sum of cubes of all numbers till (n-1)
        return (n * n * n) + sumOfSeries(n - 1);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long N;
        cin >> N;
        Solution ob;
        cout << ob.sumOfSeries(N) << "\n";
    }
}
// } Driver Code Ends