class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        int m[60] = {};
        int ret = 0;
        for(int x:time){
            int t = x % 60;
            int y = (60 - t)%60;
            ret += m[y];
            m[t]++;
        }
        return ret;
        
    }
};