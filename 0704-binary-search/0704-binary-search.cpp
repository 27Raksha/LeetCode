class Solution {
public:
    int search(vector<int>& nums, int target) {
        int cnt=-1;
        for(int i =0;i<nums.size();i++){
            if(nums[i]==target){
                cnt=i;
            }
        }
       return cnt; 
    }
};