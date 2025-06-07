

class Solution {
  public:
    int firstElement(vector<int>& arr, int k) {
        // write code here
        int n=arr.size();
        // brute force
        // for(int i=0;i<n;i++){
        //     int count=0;
        //     for(int j=0;j<n;j++){
        //         if(arr[i]==arr[j] ){
        //             count++;
        //         }
        //     }
        //     if(count==k){
        //         return arr[i];
        //     }
        // }
        // return -1;
        
        // optimal approch using hashmap 
         unordered_map<int, int> count_map;
    for (int i=0; i<n; i++)
        count_map[arr[i]]++;
    
    for (int i=0; i<n; i++)  

        // if count of element == k ,then
        // it is the required first element 
        if (count_map[arr[i]] == k)
            return arr[i];
            
    // no element occurs k times
    return -1;
    }
};