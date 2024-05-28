class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> arr;
        vector<int> ds;
        backtrack(0,target,candidates,arr,ds);
        return arr;
    }
    void backtrack(int start, int target,vector<int>& candidates, vector<vector<int>> &arr, vector<int> &ds){
        if(start==candidates.size()){
            if(target==0){
                arr.push_back(ds);
            }
            return;
        }
        
            if(candidates[start]<= target){
                ds.push_back(candidates[start]);
                backtrack(start,target-candidates[start],candidates,arr,ds);
                ds.pop_back();
                
            }
        backtrack(start+1,target,candidates,arr,ds);
        
    }
};