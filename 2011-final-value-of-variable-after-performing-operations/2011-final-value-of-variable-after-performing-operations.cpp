class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int x = 0;
        for (const std::string& var : operations) {
            if (var == "X++" || var == "++X") {
                x++;
            } else {
                x--;
            }
        }
        return x;
    }
};