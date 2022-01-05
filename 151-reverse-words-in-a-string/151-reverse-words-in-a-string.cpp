class Solution {
public:
    string trim (string s){
        int lflag=0;
        int i=0;
        if(s[0]==' '){
            lflag=1;
            
            for(i=0;i<s.length();i++){
            if(s[i]!=' '){
                break;
                }
            }    
        }
        int rflag=0;
        
        int j=s.length()-1;
        if(s[s.length()-1]==' '){
            rflag=1;
        
            for(j;j>=0;j--){
                if(s[j]!=' '){
                    break;
                }
            }
        }
        if(rflag && lflag)
            return s.substr(i,j-i+1);
        if(rflag)
            return s.substr(0,j-i+1);
        if(lflag)
            return s.substr(i,j-i+1);
        return s;
    }
    string reverseWords(string s) {
       s=trim(s);
        /*/
        int n=s.length();
        string ans="";
        int start=n-1;
        stack <string> st;
        for(int i=n-1;i>=0;i--){
            if(s[i]==' '){
                if(i+1<n && s[i+1]!=' '){
                    st.push(s.substr((i+1,start-i)));
                    
                }
            }
        }*/
       int n=s.length();
        string ans="";
        int start=n-1;
       // cout<<"value of start is"<<start<<endl;
        for(int i=n-1;i>=0;i--){
            if(s[i]==' '){
                if(i+1>=n){
                    continue;
                }
                if(s[i+1]!=' '){
                    ans+=s.substr(i+1,start-i);
                    ans+=' '; 
                    
                    start=i-1;
                   // cout<<"space encountered at "<<i<<endl<<"and "<<s<<endl<<"value of start is "<<start<<endl;
                }
                else{
                    start--;
                    continue;
                    
                }
            }
        }
        int i;
        for(i=0;i<n;i++){
            if(s[i]==' '){
                continue;
            }
            else{
                break;
            }
           
        }
       ans+=s.substr(i,start+1);
        return ans;
    }
        
        
};