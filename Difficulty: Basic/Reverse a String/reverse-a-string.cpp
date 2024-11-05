//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    string reverseString(string& s) {
        // code here
        int n=s.size();
        for(int i=0;i<n/2;i++){
            char temp=s[i];
            s[i]=s[n-i-1];
            s[n-i-1]=temp;
        }
        return s;
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.reverseString(s) << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends