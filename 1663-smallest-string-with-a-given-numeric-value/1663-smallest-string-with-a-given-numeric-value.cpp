class Solution {
public:
    string getSmallestString(int n, int k) {
        string s="";
        for(int i=0;i<n;i++){
            s+='a';
        }
        k=k-n;
        for(int i=n-1;i>=0;i--){
            int t=min(25,k);
            s[i]=t+'a';
            k=k-t;
        }
        return s;
    }
};