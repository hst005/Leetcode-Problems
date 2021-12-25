class Solution {
public:
    vector<string> letterCombinations(string digits,vector<string> ans={}) {
       
        string getcode[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        if(digits.length()==0){
            return ans;
        }
        if(digits.length()==1){
           string code=getcode[digits[0]-'0'];
        for(int i=0;i<code.length();i++){
            string temp="";
            temp+=code[i];
            ans.push_back(temp);
        }
        return ans;
           
       }
        int len=digits.length();
        int rem=(digits[len-1]-'0');
    string code=getcode[rem];
    vector <string> smallans=letterCombinations(digits.substr(0,len-1));
    
    for(int i=0;i<code.length();i++){
        for(int j=0;j<smallans.size();j++){
            ans.push_back(smallans[j]+code[i]);
        }
    }
        return ans;
    }
};