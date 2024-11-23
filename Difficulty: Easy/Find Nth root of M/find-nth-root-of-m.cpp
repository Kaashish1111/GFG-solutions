//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	int NthRoot(int n, int m)
	{
	    // Code here.
	    for (int i = 0; i <= m; i++) {
            // Use pow to calculate i^n
            if (pow(i, n) == m) {
                return i; // Found the root
            }
            // Break early if i^n exceeds m
            else if (pow(i, n) > m) {
                break;
            }
        }
        return -1;
	}  
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		Solution ob;
		int ans = ob.NthRoot(n, m);
		cout << ans << "\n";
	
cout << "~" << "\n";
}  
	return 0;
}
// } Driver Code Ends