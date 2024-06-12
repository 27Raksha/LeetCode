class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int cnt=-1;
        int index=1;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]==target){
                cnt =i;
            
            }
        }
        if(cnt==-1){
            if(target<nums[0]){
                cnt=0;
            }
            for(int i = 0; i < n; i++) {
            if(nums[i] > target) {
                return i;
            }
        }
        return n;}
        return cnt;
    }
};