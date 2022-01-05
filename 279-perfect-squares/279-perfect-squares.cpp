class Solution {
public:
    int numSquares(int n) {
        int dp[n+1];
        if(n<=3){
            return n;
        }
        dp[0]=0;
        dp[1]=1;
        dp[2]=2;
        dp[3]=3;
        for(int i=4;i<=n;i++){
            int j=1;
            dp[i]=i;
            while(j*j<=i){
                dp[i]=min(dp[i],dp[i-j*j]+1);
                j++;
            }
        }
        return dp[n];
    }
};