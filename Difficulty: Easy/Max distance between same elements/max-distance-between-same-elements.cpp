class Solution {
  public:
    int maxDistance(vector<int> &arr) {
        // Code here
        int res=0;
        int n=arr.size();
        
        // brute force
        // for(int i=0;i<n;i++){
        //     for(int j=i+1;j<n;j++){
        //         if(arr[i]==arr[j]){
        //             res=max(res,j-i);
        //         }
        //     }
        // }
        // return res;
        
        // optimal approch using hashmap
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){

            if (mp.find(arr[i]) != mp.end()) // agar hai toh upadte kar de 
            res = max(res, i - mp[arr[i]]);
      
        // Else nahi hai toh dall de 
        else
            mp[arr[i]] = i;
        }
        return res;
    }
};