class Solution {
public:
    int beautySum(string s) {
        int ans=0;
        for(int i=0;i<s.length();i++){
            map<char, int> mp;
            for(int j=i;j<s.length();j++){
                mp[s[j]]++;
                int leastfreq= INT_MAX;
                int maxfreq= INT_MIN;
                for(auto it: mp){
                 leastfreq=min(leastfreq,it.second);
                 maxfreq=max(maxfreq,it.second);
            }
            ans+= maxfreq-leastfreq;
        }}
        return ans;
    }
};