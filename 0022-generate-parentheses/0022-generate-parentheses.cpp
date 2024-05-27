void parenthesis(int n, int open, int close, vector<char>& output, vector<string>& result){
        
        if(open >= n && close >= n){
            string str(output.begin(),output.end());
            result.push_back(str);
            
        }
            if(open<n){
                output.push_back('(');
                parenthesis(n,open+1,close, output, result); 
                output.pop_back();
        }
            if(open > close){
                output.push_back(')');
                parenthesis(n,open,close+1, output, result);
                output.pop_back();
            }
        }
class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> result;
        vector<char> output;
    
            parenthesis(n,0,0,output,result);
            
        return result;
    }
};