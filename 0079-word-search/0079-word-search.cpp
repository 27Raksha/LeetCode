class Solution {
public:
    bool isPresent(int index,int m, int n,vector<vector<char>>& board,int row, int col,  string word){
        if(index == word.length()){
            return true;
        }
        if(row<0 ||col<0||row >=m||col>=n|| board[row][col] !=word[index] || board[row][col]=='!' ){
            return false;
        }
        char c = board[row][col];
        board[row][col] = '!';
        
        bool top= isPresent(index+1,m,n,board,row-1,col,word);
        bool bottom=isPresent(index+1,m,n,board,row+1,col,word);
        bool right =isPresent(index+1,m,n,board,row,col+1,word);
        bool left = isPresent(index+1,m,n,board,row,col-1,word);
        
        board[row][col] =c;
        
        return top||bottom||right||left;
    }
    bool exist(vector<vector<char>>& board, string word) {
        int m= board.size();
        if (m == 0) return false;
        int n= board[0].size();
        
        // int index =0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(board[i][j]== word[0]){
                    if(isPresent(0,m,n,board,i,j,word)){
                        return true;
                    }
                }
            }
        }
        return false;
    }
};