class Solution {
  public:
    // a,b : the arrays
    // Function to return a list containing the union of the two arrays.
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        // Your code here
        unordered_set<int> s;
        int n1=a.size(),n2=b.size();
        for(int i=0;i<n1;i++){
            s.insert(a[i]);
        }
        for(int i=0;i<n2;i++){
            s.insert(b[i]);
        }
        vector<int> ans(s.begin(), s.end());
        sort(ans.begin(), ans.end());
        return ans;
        // return vector with correct order of elements
    }
};