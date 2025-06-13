class Solution {
public:
    int maxSubarraySum(vector<int>& arr) {
        int n = arr.size();
        // brute force
        // int maxi = INT_MIN;
        // for (int i = 0; i < n; i++) {
        //     int sum = 0;
        //     for (int j = i; j < n; j++) {
        //         sum += arr[j];
        //         maxi = max(maxi, sum);
        //     }
        // }
        // return maxi;
        
        int curr_sum=arr[0];
        int maxi_sum=arr[0];
        for(int i=1;i<n;i++){
            curr_sum = max(arr[i],curr_sum+arr[i]);
            maxi_sum=max(maxi_sum,curr_sum);
        }
        return maxi_sum;
    }
};
