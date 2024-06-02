class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        vector<int> ans;
        unordered_map<int,int> a;
    for(int k=0;k<m;k++){
        a[nums2[k]]=k;}
    for(int i=0;i<n;i++){
        int index= a[nums1[i]];
        int res=-1;
        for(int j=index+1;j<m;j++){
            if(nums2[j]>nums1[i]){
                res= nums2[j];
                break;
            }
        }
        ans.push_back(res);
    }
    
    return ans;
    }
};