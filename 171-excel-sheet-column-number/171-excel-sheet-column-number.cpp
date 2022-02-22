class Solution {
public:
    int titleToNumber(string l) {
        int n=l.length();
        int ans=0;
        for(int i=0;i<n;i++){
            ans=ans*26+(l[i]-'A'+1);
        }
        return ans;
    }
};