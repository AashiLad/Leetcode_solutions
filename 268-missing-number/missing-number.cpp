class Solution {
public:
    int missingNumber(vector<int>& nums) {

        int arrsum = 0;
        int n = nums.size();

        int totalsum = n*(n+1)/2;

        for(int i : nums){
            arrsum += i;
        }

        return totalsum - arrsum;
        
    }
};