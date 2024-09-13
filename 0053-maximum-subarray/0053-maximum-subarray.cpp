class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max_val= nums[0];
        int glob=nums[0];
        for(int i=1;i<nums.size();i++){
            max_val=max(nums[i],max_val+nums[i]);
            glob= max(glob,max_val);
        }
        return glob;
    }
};