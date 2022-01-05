class Solution {
public:
    int trailingZeroes(int n) {
        int ans=n/5;
        n=n/5;
        while(n!=0){
            n=n/5;
            ans+=n;
        }
        return ans;
    }
};