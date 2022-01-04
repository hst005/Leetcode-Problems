class Solution {
public:
    int bitwiseComplement(int n) {
        if(n==0){
            return 1;
        }
        int llog=floor(log2(n));
        return pow(2,llog+1)-n-1;
    }
};