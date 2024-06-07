class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int k=0;
        int a=0;
        for(int i=0;i<n;i++){
            if(nums[i]==1){
                k++;
            if(k>a){
                a=k;
            }
            }
            else{
                k=0;
            }
        }
        return a;
    }
};