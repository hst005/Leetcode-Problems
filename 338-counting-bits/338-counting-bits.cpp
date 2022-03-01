class Solution {
public:
    
    vector<int> countBits(int n) {
       vector <int> dp;
        dp.push_back(0);
        if(n==0)
            return dp;
        dp.push_back(1);
        for (int i=2;i<=n;i++){
           int temp=(i&1)+dp[i/2];
            dp.push_back(temp);
       }
        return dp;
    }
};