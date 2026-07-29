class Solution {
public:
    void solve(vector<int>& nums, vector<int>& ans, int i, vector<vector<int>>& allsubset){
        //base case
        if(i == nums.size()){
            allsubset.push_back(ans);
            return;
        }
        // include
        ans.push_back(nums[i]);
        solve(nums, ans, i+1, allsubset);

        ans.pop_back();
        //exclude
        solve(nums, ans, i+1, allsubset);

    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> allsubset;
        vector<int> ans;

        solve(nums, ans, 0, allsubset);  
        return allsubset;
    }
};