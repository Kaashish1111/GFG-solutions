// class Solution {
//   public:
//     int maximumSumSubarray(vector<int>& arr, int k) {
//         int n = arr.size();
//         if (n < k) return 0;  // edge case

//         int maxi = INT_MIN;

//         for (int i = 0; i <= n - k; i++) {
//             int curr_sum = 0;
//             for (int j = i; j < i + k; j++) {
//                 curr_sum += arr[j];
//             }
//             maxi = max(maxi, curr_sum);
//         }

//         return maxi;
//     }
// };

class Solution {
  public:
    int maximumSumSubarray(vector<int> &arr,int k) {
        int n = arr.size();
        int max_sum = 0;
        int window_sum = 0;

        // First window
        for (int i = 0; i < k; i++) {
            window_sum += arr[i];
        }

        max_sum = window_sum;

        // Slide the window
        for (int i = k; i < n; i++) {
            window_sum += arr[i] - arr[i - k];  // add new, remove old
            max_sum = max(max_sum, window_sum);
        }

        return max_sum;
    }
};

