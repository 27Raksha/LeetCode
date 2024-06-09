class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_pri=prices[0];
        int prof=0;
        for(int i=1;i<prices.size();i++){
            prof= max(prof,prices[i]-min_pri);
            min_pri= min(prices[i],min_pri); 
        }
        return prof;
    }
};