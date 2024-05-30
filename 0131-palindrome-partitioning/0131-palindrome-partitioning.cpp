class Solution {
public:
    vector<vector<string>> partition(string s) {
        vector<vector<string>> arr;
        vector<string> a;
        backtrack(0,s,arr,a);
        return arr;
    }
    bool isPalindrome(string s,int start,int end){
        while(start<=end){
            if(s[start++]!=s[end--])
                return false;
    
        }
         return true;
    }
    void backtrack(int start,string s,vector<vector<string>> &arr,vector<string> &a){
        if(start==s.size()){
            arr.push_back(a);
            return;
        }
        for(int i=start;i<s.size();++i){
            if(isPalindrome(s,start,i)){
                a.push_back(s.substr(start,i-start+1));
                 backtrack(i+1,s,arr,a);
                a.pop_back();
            }
        }
        
        
    }
};