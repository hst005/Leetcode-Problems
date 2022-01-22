class Solution {
public:
    bool dp[100001];
        bool winnerSquareGame(int n) 
    {
        if(dp[n]==true) return dp[n]; 
        
        else
        {
            bool tempans = false;
            for(int sqr = 1; n - sqr*sqr>=0; sqr++) 
            {
                if(n-sqr*sqr==0) 
                {
                    tempans = true; 
                    break;
                }
                else
                {
                    tempans = tempans || !winnerSquareGame(n-sqr*sqr); 
                }
            }
            return dp[n] = tempans;
        }
    }

};