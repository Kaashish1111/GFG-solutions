//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public:
    int evenlyDivides(int N){
        //code here
        int count = 0;
        int temp = N; // Store the original number
        while(temp != 0){
            int rem = temp % 10;
            if(rem != 0 && N % rem == 0){ // Check for non-zero digits and divisibility
                count++;
            }
            temp = temp / 10;
        }
        return count;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.evenlyDivides(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends