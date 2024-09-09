//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    //Complete this function
    void printNos(int N)
    {
        //Your code here
                // Base case: if N is less than 1, stop recursion
        if (N == 0) {
            return;
        }
        
        // Recursive call: first print numbers from 1 to N-1
        printNos(N - 1);
        
        // Then print N after the recursive call
        cout << N << " ";
    }
};

//{ Driver Code Starts.
/* Driver program to test printNos */
int main()
{
    int T;
    
    //taking testcases
    cin>>T;
    
    while(T--)
    {
        int N;
        
        //input N
        cin>>N;
        Solution ob;
        //calling printNos() function
        ob.printNos(N);
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends