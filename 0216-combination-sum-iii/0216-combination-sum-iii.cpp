class Solution {
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> arr;
        vector<int> res;
        backtrack(1,k,n,arr,res);
        return arr;
    }
    void backtrack(int start, int k,int n,vector<vector<int>> &arr,vector<int> &res ){
            if(res.size()==k && n==0){
                arr.push_back(res);
                return;
            
        }
        for(int i =start;i<=9;i++){
        res.push_back(i);
        backtrack(i+1,k,n-i,arr,res);
           res.pop_back();
        }
    }
};