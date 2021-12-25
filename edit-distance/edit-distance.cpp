class Solution {
public:
    int mini(int x, int y, int z)
{
    int a=min(x,y);
        return min(a,z);
}
    int minDistance(string s1, string s2) {
        int m=s1.length();
         int n=s2.length();
  
  int **dp=new int*[m+1];
  for(int i=0;i<=m;i++){
    dp[i]=new int[n+1];
  }
  
  for(int i=0;i<=m;i++){
    dp[i][0]=i;
  }
  
  for(int i=0;i<=n;i++){
    dp[0][i]=i;
  }
  
  for(int i=1;i<=m;i++){
    for(int j=1;j<=n;j++){
      if(s1[i-1]==s2[j-1]){
            dp[i][j]=dp[i-1][j-1];
        }
        else{
            dp[i][j]=1+mini(dp[i-1][j-1],dp[i][j-1],dp[i-1][j]);
        }
    }	
    
  }
 
  
  
 return dp[m][n];
    }
};