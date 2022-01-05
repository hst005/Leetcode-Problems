class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int dp[n][2];
        for(int i=n-1;i>=0;i--){
            dp[i][0]=1;
            dp[i][1]=i;
            for(int j=i+1;j<n;j++){
                if(nums[j]%nums[i]==0){
                    if(dp[i][0]<=dp[j][0]){
                        dp[i][0]=dp[j][0]+1;
                        dp[i][1]=j;
                    }
                }
            }
            
        }
        int maxlen=1,maxlenwhere=0;
        for(int i=0;i<n;i++){
            if(maxlen<dp[i][0]){
                maxlen=dp[i][0];
                maxlenwhere=i;
            }
        }
        
        vector <int> ans;
        int temp=maxlenwhere;
        int anssize=0;
        while(anssize<maxlen ){
            ans.push_back(nums[temp]);
            temp=dp[temp][1];
            anssize++;
        }
        return ans;
    }
};