class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int> ans;
        set< vector < int >> ds;
        vector<vector<int>> result;
        backtrack(nums,0,ans,ds);
        for(auto it = ds.begin();it!=ds.end();it++){
            result.push_back(*it);
        }
        return result;
    }
    void backtrack(vector<int>& nums, int start,vector<int> &ans,set< vector < int >> &ds){
        if(start==nums.size()){
            sort(ans.begin(),ans.end());
            ds.insert(ans);
            return;
        }
        ans.push_back(nums[start]);
        backtrack(nums,start+1,ans,ds);
        ans.pop_back();
        backtrack(nums,start+1,ans,ds);
    }
};