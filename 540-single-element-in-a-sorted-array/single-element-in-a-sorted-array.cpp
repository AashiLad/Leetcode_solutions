class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();
        if(n == 1) return nums[0];
        int st = 0, ed = n-1;

        while(st <= ed){
            int mid = st + (ed-st)/2;
            // edge case
            if(mid == 0 && nums[0] != nums[1]) return nums[mid];
            if(mid == n-1 && nums[n-1] != nums[n-2]) return nums[mid];
            // mid is unique
            if(nums[mid-1] != nums[mid] && nums[mid] != nums[mid+1]) return nums[mid];
            if(mid % 2 == 0){ // even L & R
                if(nums[mid-1] == nums[mid]) { // left
                    ed = mid - 1;
                } else{ // right
                    st = mid + 1;
                }
            } else{ // odd L & R
                if(nums[mid-1] == nums[mid]) { //right
                   st = mid + 1;
                } else{ // left
                    ed = mid - 1;
                }
            }
        }
        return -1;
    }
};