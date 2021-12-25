class Solution {
public:
    bool isposs(int n,int row,int col,vector <string> board){
    //up
    for(int i=0;i<row;i++){
        if(board[i][col]=='Q'){
            return false;
        }
    }
    //left
    for(int i=0;i<col;i++){
        if(board[row][i]=='Q'){
            return false;
        }
    }
    //left diagnol
    for(int i=row-1,j=col-1;i>=0 && j>=0;i--,j--){
        if(board[i][j]=='Q'){
            return false;
        }
    }
    //rigjt diag
    for(int i=row-1,j=col+1;i>=0 && j<n;i--,j++){
        if(board[i][j]=='Q'){
            return false;
        }
    }
    return true;

}
    
    void helper(int &n,vector <vector<string>> &ans,vector <string> &board,int row){
        
        if(row==n){
            
            ans.push_back(board);
            return ;
        }
            
        for(int i=0;i<n;i++){
          if(isposs(n,row,i,board) ){ 
              board[row][i]='Q';
                helper(n,ans,board,row+1);
              board[row][i]='.';
          }
        }
        
        
    }
    
    vector<vector<string>> solveNQueens(int n) {
        vector <vector<string>> ans; 
        
        vector <string> board; 
        
        for(int i=0;i<n;i++){
            string temp="";
            for(int j=0;j<n;j++){
                temp+='.';
            }
            board.push_back(temp);
        }
         helper(n,ans,board,0);
        return ans;
    }
    
    
};