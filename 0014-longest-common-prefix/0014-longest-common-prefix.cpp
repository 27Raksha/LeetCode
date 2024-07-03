class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";
        
        string prefix = strs[0];
        
        for (const auto& str : strs) {
            int i = 0;
            while (i < prefix.size() && i < str.size() && prefix[i] == str[i]) {
                ++i;
            }
            prefix = prefix.substr(0, i);
            if (prefix.empty()) break;
        }
        
        return prefix;
    }
};
