class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> ans;
        vector<vector<int>> result;
        backtrack(nums,0,ans,result);
        return result;
    }
    
    void backtrack(vector<int>& nums, int start,vector<int> &ans,vector<vector<int>> &result){
        result.push_back(ans);
        for(int i= start;i<nums.size();i++){
            ans.push_back(nums[i]);
            backtrack(nums,i+1,ans,result);
            ans.pop_back();
        }
    }
};