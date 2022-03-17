class Solution {
public:
    int minDeletions(string s) {
        int n=s.length();
        int freq[26];
        for(int i=0;i<26;i++){
            freq[i]=0;
        }
        for(int i=0;i<n;i++){
            freq[s[i]-'a']++;
        }
        sort(freq,freq+26,greater<int>());
        int next=freq[0]-1;
        int ans=0;
        for(int i=1;i<26;i++){
            if(freq[i]==0){
                break;
            }
            else if(freq[i]==next){
                next--;
            }
            else if(freq[i]>next){
                ans+=freq[i]-next;
                if(next!=0)
                next--;
            }
            else{
                next=freq[i]-1;
            }
                
        }
        return ans;
    }
};