class Solution {
public:
    bool solve(vector<vector<char>>& board){
        int n = board[0].size();
        for(int i =0;i<n;i++){
            for(int j= 0;j<n;j++){
                if(board[i][j]=='.'){
                    for(char val='1';val<='9';val++){
                    if(isSafe(board,i,j,val)){
                        board[i][j]= val;
                        bool sol= solve(board);
                        if(sol) return true;
                        else{
                            board[i][j]='.';
                        }
                    }
                }
                    return false;
            }
        }
    }
        return true;
    }
    bool isSafe(vector<vector<char>>& board,int row,int col,char val){
        for(int i=0;i<board.size();i++){
            if(board[row][i]==val){
                return false;
            }
            if(board[i][col]== val){
                return false;
            }
            if(board[3*(row/3)+i/3][3*(col/3)+i%3]==val){
                return false;
            }
        }
        return true;
    }
    void solveSudoku(vector<vector<char>>& board) {
        solve(board);
    }
};