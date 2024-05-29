class Solution {
public:
    bool divisorGame(int n) {
        vector<bool> dp(n+1, false);
        dp[2] = true;
        for(int i=4; i<=n; i++) {
            for(int j=1; j < n && n%j == 0; j++) {
                if(i%2==0 && dp[i-j]) {
                    dp[i]=true;
                    break;
                }
            }
        }
        return dp[n];
    }
};