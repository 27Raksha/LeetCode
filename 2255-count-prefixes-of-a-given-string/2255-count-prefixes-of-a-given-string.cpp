class Solution {
public:
    int countPrefixes(vector<string>& words, string s) {
        int c=0;
        for(int i=0;i<words.size();i++){
            int n=words[i].size();
            string a=s.substr(0,n);
            if (words[i]==a) c++;
        }
        return c;
        
    }
};