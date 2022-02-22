class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int rows=matrix.size();
        int ols=matrix[0].size();
        
        int r[rows],o[ols];
        bool firstrow=false,firstols=false;
        for(int i=0;i<rows;i++){
            if(matrix[i][0]==0){
                firstrow=true;
                break;
            }
        }
        
        for(int i=0;i<ols;i++){
            if(matrix[0][i]==0){
                firstols=true;
                break;
            }
        }
        
        
        for(int i=1;i<rows;i++){
            for(int j=1;j<ols;j++){
                if(matrix[i][j]==0){
                    matrix[i][0]=0;
                    matrix[0][j]=0;
                    
                }
            }
        }
        
        for(int i=1;i<rows;i++){
            if(matrix[i][0]==0){
                for(int j=0;j<ols;j++){
                    matrix[i][j]=0;
                }
            }
        }
        
        for(int i=1;i<ols;i++){
            if(matrix[0][i]==0){
                for(int j=0;j<rows;j++){
                    matrix[j][i]=0;
                }
            }
        }
        
        if(firstrow){
            for(int i=0;i<rows;i++){
                matrix[i][0]=0;
            }
        }
        
        if(firstols){
            for(int i=0;i<ols;i++){
                matrix[0][i]=0;
            }
        }
       // return matrix;
    }
};