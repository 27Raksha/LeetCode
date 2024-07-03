class Solution {
public:
bool check(string s, char c){
    for(int i=0;i<s.length();i++)if(s[i]==c)return true;
    return false;
}
    vector<int> findWordsContaining(vector<string>& v, char c) {
        vector<int>p;
        for(int i=0;i<v.size();i++){
            if(check(v[i],c))p.push_back(i);
        }
        return p;
    }
};