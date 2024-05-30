class Solution {
public:
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<char>> board(n, vector<char>(n,'.'));
        vector<vector<string>> ans;
        backtrack(0,ans,board,n);
        return ans;
    }
    void backtrack(int col,vector<vector<string>> &ans,vector<vector<char>> &board,int n){
        if(col==n){
            addSol(board,ans,n);
            return;
        }
        for(int row =0;row<n;row++){
            if(isSafe(row,col, board,n)){
                board[row][col]= 'Q';
                backtrack(col+1,ans,board,n);
                board[row][col]='.';
            }
        }
    }
    void addSol(vector<vector<char>> &board,vector<vector<string>> &ans, int n){
        vector<string> temp;
        for (int i = 0; i < n; i++) {
        string row = "";
        for (int j = 0; j < n; j++) {
            row += board[i][j];
        }
        temp.push_back(row);
    }
    ans.push_back(temp);
}
   bool isSafe(int row, int col, vector<vector<char>> &board, int n) {
        // Check this row on left side
        for (int y = 0; y < col; y++) {
            if (board[row][y] == 'Q') {
                return false;
            }
        }
        
        // Check upper diagonal on left side
        for (int x = row, y = col; x >= 0 && y >= 0; x--, y--) {
            if (board[x][y] == 'Q') {
                return false;
            }
        }
        
        // Check lower diagonal on left side
        for (int x = row, y = col; x < n && y >= 0; x++, y--) {
            if (board[x][y] == 'Q') {
                return false;
            }
        }
        
        return true;
   }
};