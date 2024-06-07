class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int c=1;
        int m=1;
        int a=nums[0];
        int n=(nums.size())/2;
        
    for(int i=1;i<nums.size();i++){
        if(nums[i]==nums[i-1]){
            c++;
        }
        else{
            c=1;
            
        }
        if(c>m){
            m=c;
            a=nums[i];
        }
        
        
    }
        return a;
    }
};