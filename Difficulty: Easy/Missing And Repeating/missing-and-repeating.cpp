//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends


// brute force
// class Solution {
//   public:
//     vector<int> findTwoElement(vector<int>& arr) {
//         // code here
//         vector<int> ans(2,-1);
//         int n=arr.size();
//         for(int i=1;i<=n;i++){
//             int count=0;
//             for(int j=0;j<n;j++){
//                 if(arr[j]==i){
//                     count++;
//                 }
//             }
//             if(count==2){
//                 ans[0]=i;
//             }
//             else if (count==0){
//                 ans[1]=i;
//             }
//         }
//         return ans;
//     }
// };

// better 
class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
        long long n = arr.size(); // size of the array

        // Find SN and S2N:
        long long SN = (n * (n + 1)) / 2;
        long long S2N = (n * (n + 1) * (2 * n + 1)) / 6;

        // Calculate S and S2:
        long long S = 0, S2 = 0;
        for (int i = 0; i < n; i++) {
            S += arr[i];
            S2 += (long long)arr[i] * (long long)arr[i];
        }

        // S - SN = X - Y
        long long val1 = S - SN;

        // S2 - S2N = X^2 - Y^2
        long long val2 = S2 - S2N;

        // Find X + Y = (X^2 - Y^2) / (X - Y)
        val2 = val2 / val1;

        // Find X and Y
        long long x = (val1 + val2) / 2;
        long long y = x - val1;

        return {(int)x, (int)y};
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string input;
        int num;
        vector<int> arr;
        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            arr.push_back(num);
        }
        Solution ob;
        auto ans = ob.findTwoElement(arr);
        cout << ans[0] << " " << ans[1] << "\n";

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends