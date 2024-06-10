class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int row= matrix.size();
        int col= matrix[0].size();
        int startingrow=0;
        int endingrow=row-1;
        int startingcol=0;
        int endingcol=col-1;
        int count=0;
        int total=row*col;
        while(count<total){
        for(int i=startingcol;count < total && i<=endingcol;i++){
            ans.push_back(matrix[startingrow][i]);
            count++;
        }
        startingrow++;
        
        for(int j=startingrow;count < total && j<=endingrow;j++){
            ans.push_back(matrix[j][endingcol]);
            count++;
        }
        endingcol--;
        
        for(int k=endingcol;count < total && k>=startingcol;k--){
            ans.push_back(matrix[endingrow][k]);
            count++;
        }
        endingrow--;
        
        for(int l=endingrow;count < total && l>=startingrow;l--){
            ans.push_back(matrix[l][startingcol]);
            count++;
        }
        startingcol++;
        
        }
        return ans;
    }
};