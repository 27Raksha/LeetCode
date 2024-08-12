class Solution {
public:
    bool rotateString(string s, string goal) {
        int l=s.length();
        for(int i =0;i<l;i++){
            s+=s[i];
            string k= s.substr(i+1,l+1);
            if(k==goal){
                return true;
            }
        }
        return false;
    }
};