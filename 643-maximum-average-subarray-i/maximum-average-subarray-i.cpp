class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int sum = 0;
        // first window
        for(int i = 0; i < k; i++){
            sum += nums[i];
        }
        int maxsum = sum;

        for(int j = k; j < nums.size(); j++){
            sum += nums[j];

            sum -= nums[j-k];

            maxsum = max(maxsum, sum);
        }
        return (double)maxsum/k;
          
    }
};