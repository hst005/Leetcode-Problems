class Solution {
public:
    bool dfs(vector<vector<char>>& board, string word,int i,int j,int wordpos){
        if(i < 0 || i >= board.size() || j < 0 || j >= board[0].size() || word[wordpos] != board[i][j]){
            return false;
        }    
        if(wordpos==word.length()-1){
            return true;
        }
       
        
        char curr=board[i][j];
        board[i][j]='*';
        bool ans=dfs(board,word,i+1,j,wordpos+1)||dfs(board,word,i,j+1,wordpos+1)||dfs(board,word,i-1,j,wordpos+1)||dfs(board,word,i,j-1,wordpos+1);
       board[i][j]=curr;
        
            if(ans)
                
                cout<<i<<" "<<j<<endl;
        
       
        return ans;
        
        
    }
    
    bool exist(vector<vector<char>>& board, string word) {
        if(word.empty()){
          //  cout<<"word empty true";
            return true;
            
        }
        if(board.empty() || board[0].empty()){
            return false;
        }
        
        int m,n;
        m=board.size();
        n=board[0].size();
                
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                
                if(dfs(board,word,i,j,0))
                    return true;
                
            }
        }
        return false;
    }
    
    
    
};