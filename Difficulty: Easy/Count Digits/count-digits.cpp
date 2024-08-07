//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public:
    int evenlyDivides(int N){
        //code here
           int count = 0;
        int Num = N;
        int rem = 0;
        
        while(Num > 0){
            
            rem = Num % 10;
            
            if(rem != 0 && N%rem == 0){
                count++;
            }
            
            Num = Num / 10 ;
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