class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map<int, int> mp;
        int n = fruits.size();

        int left = 0;
        int res = 0;
        int right = 0;
        while(right < n){
            mp[fruits[right]]++;

            if(mp.size() <= 2){
                res = max(res, right - left + 1);
            }
            else{
                mp[fruits[left]]--;
                if(mp[fruits[left]] == 0){
                    mp.erase(fruits[left]);
                }
                left++;
            }
            right++;
        }
        return res;

        
    }
};