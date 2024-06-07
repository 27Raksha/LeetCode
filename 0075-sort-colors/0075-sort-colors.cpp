class Solution {
public:
    void sortColors(vector<int>& nums) {
        vector<int> ans;
        int n = nums.size();
        int r=0,b=0,w=0;
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                r=r+1;
            }
            if(nums[i]==1){
                w=w+1;
            }
            if(nums[i]==2){
                b=b+1;
            }
            
        }
        int index = 0;
        for(int i=0;i<r;i++){
            nums[index++]=0;
        }
        for(int i=0;i<w;i++){
             nums[index++]=1;
        }
        for(int i=0;i<b;i++){
             nums[index++]=2;
        }
    }
};