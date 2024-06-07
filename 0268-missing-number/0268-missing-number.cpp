class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int k=0;
        int n= nums.size();
       int tot= (n*(n+1))/2;
        for(int i:nums){
            k=k+i;
            }
           return tot-k;
    }
};