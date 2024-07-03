class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        int n = s.size();
        string temp;
        temp.resize(n);
        for(int i=0;i<n;i++)
        {
            temp[indices[i]] = s[i];
        }
        return temp;
    }
};