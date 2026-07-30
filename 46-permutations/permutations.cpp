class Solution {
    private:
    void solve(vector<int> nums, int idx, vector<vector<int>>& ans){
        if(idx >= nums.size()){
            ans.push_back(nums);
            return;
        }

        for(int j = idx; j < nums.size(); j++){
                swap(nums[j], nums[idx]);
                solve(nums,idx+1,ans);
                swap(nums[j], nums[idx]);
        }

    }
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        int idx = 0;

        solve(nums,idx,ans);
        return ans;
        
    }
};