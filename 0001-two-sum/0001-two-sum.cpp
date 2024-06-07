class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> numMap;
        int x = nums.size();
        for(int i=0;i<x;i++){
            int y=target-nums[i];
            if(numMap.count(y)){
                return{numMap[y],i};
            }
            numMap[nums[i]]=i;
        }
        return{};
}
};