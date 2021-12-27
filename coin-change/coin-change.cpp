class Solution {
public:
    int helper(vector <int> &coins,int amount,int n,long long  **dp ){
        if(n<=0){return INT_MAX-1;
                 }
        if(amount==0){
            return 0;
        }
    
        if(dp[n][amount]!=-1){
            return dp[n][amount];
        }
        int with;
        int without;
        
        without=helper(coins,amount,n-1,dp);
        
        if(amount-coins[n-1]>=0){
        with=helper(coins,amount-coins[n-1],n,dp);
           return dp[n][amount]=min(1+with,without);
        }
        
        return dp[n][amount]=without;
    }
    int coinChange(vector<int>& coins, int amount){
        
        int n=coins.size();
        long long  **dp=new long long *[n+1];
        for(int i=0;i<=n;i++){
            dp[i]=new long long [amount+1];
            for(int j=0;j<=amount;j++){
                dp[i][j]=-1;
            }
        }
        //int n=coins.size();
        int ans= helper(coins,amount,n,dp);
        return (ans==INT_MAX || ans == INT_MAX-1)?-1:ans;
    }
  /*  int coinChange(vector<int>& coins, int amount) {
     if(amount==0){
         return 0;
         
     }   
        
    long long int dp[amount+1];
        for(int i=0;i<amount+1;i++){
            dp[i]=INT_MAX;
        }
        dp[0]=0;
        for(int i=1;i<amount+1;i++){
            for(int j=0;j<coins.size();j++){
                if(i-coins[j]>=0){
                dp[i]=min(dp[i],dp[i-coins[j]]+1);
                }
            }
        }
        if(dp[amount]!=INT_MAX){
        return dp[amount];
        }
        return -1;
    }*/
    
      /*  if(amount==0){
            return 1;
        }
        vector<vector<int>> dp;
       // int **dp=new int*[amount+1];
        for(int i=0;i<amount+1;i++){
            vector<int> temp;
            for(int j=0;j<coins.size();j++){
                temp.push_back(INT_MAX);    
            }
            dp.push_back(temp);
        }
        
        return helper(coins,0,amount,dp);
    }
    
    int helper(vector<int>& coins,int pos, int amount,vector<vector <int>> dp){
        if(amount==0){
            return 1;
        }
        if(amount<0){
            return 0;
        }
        if(coins.size()<=0){
            return -1;
        }
        if(coins.size()==pos+1){
            return 0;
        }
        if(dp[amount][pos]!=INT_MAX){
            return dp[amount][pos];
        }
        else{
            int smallans1=helper(coins,pos,amount-coins[pos],dp);
            int smallans2=helper(coins,pos+1,amount,dp);
            dp[amount][pos]=min(smallans1,smallans2);
        }
        return dp[amount][pos];
        
    }*/
};