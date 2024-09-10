class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProf=0;
        int mini=prices[0];
        for(int i = 1;i< prices.size();i++){
            int currProf= prices[i]-mini;
            maxProf= max(maxProf, currProf);
            mini=min(mini, prices[i]);
        }
        return maxProf;
    }
};