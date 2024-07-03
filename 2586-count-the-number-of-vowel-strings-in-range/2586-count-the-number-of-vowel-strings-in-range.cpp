class Solution {
public:
    int vowelStrings(vector<string>& words, int left, int right) {

        int ans=0;
        string str="aeiou";
        for(int i=left;i<=right;i++){

                char f=words[i][0], s = words[i][words[i].length()-1];
                if( (str.find(f) != string::npos) && (str.find(s) != string::npos) )
                    ans++;
        }
        return ans;
    }
};