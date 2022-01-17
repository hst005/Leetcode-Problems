class Solution {
public:
    // int minDistance(string word1, string word2) {
    //     if(word1.length()==0){
    //         return word2.length();
    //     }
    //     if(word2.length()==0){
    //         return word1.length();
    //     }
    //     if(word1[0]==word2[0]){
    //         return minDistance(word1.substr(1),word2.substr(1));
    //     }
    //     else{
    //         return 1+min(minDistance(word1.substr(1),word2),minDistance(word1,word2.substr(1)));
    //     }
    // }
    int minDistance(string a, string b) {
        vector<vector<uint>> dp(a.size() + 2, vector<uint>(b.size() + 2, -1));
        for (int i = a.size(); i >= 0; i--)
            for (int j = b.size(); j >= 0; j--)
                dp[i][j] = i < a.size() && j < b.size() && a[i] == b[j] ? dp[i + 1][j + 1] : 1 + min(dp[i + 1][j], dp[i][j + 1]);
        return dp[0][0];
    }
};