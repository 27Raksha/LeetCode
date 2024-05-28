class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<vector<int>> arr;
	    vector<int> ds;
	    backtrack(0,candidates, target,arr,ds);
	    return arr;
	}
    void backtrack(int i,vector<int>& candidates, int target,vector<vector<int>> &arr,vector<int> &ds){
        if(target == 0){
            arr.push_back(ds);
            return;
        }
        for(int j = i; j<candidates.size(); j++){
            if(j>i && candidates[j]==candidates[j-1]) continue;
            if(candidates[j]>target) break;
            ds.push_back(candidates[j]);
            backtrack(j+1,candidates,target-candidates[j],arr,ds);
            ds.pop_back();
        }
    }
    
    
};