class Solution {
public:
    bool detectCapitalUse(string word) {
        bool t[26];
        bool prevcap=false;
        for(int i=0;i<word.length();i++){
            int temp=word[i]-'a';
            //cout<<temp<<endl;
            if(temp<0){
                if(i==0){
                    prevcap=true;
                    continue;
                }
                if(prevcap==true){
                    continue;
                }
                else{
                    return false;
                }
            }
            else{
                if(prevcap==true && i!=1){
                    return false;
                }
                prevcap=false;
            }
        }
        
        return true;
    }
};