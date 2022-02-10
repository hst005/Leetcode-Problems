class Solution {
public:
    char findTheDifference(string s, string t) {
        int sum=0;
        for(int i=0;i<s.length();i++){
            sum+=(s[i]-'a');
        }
        for(int i=0;i<t.length();i++){
            int aa=(t[i]-'a');
           sum=sum-aa; 
        }
        sum=abs(sum);
        char ans= (char)(sum+'a');
        return ans;
    }
};