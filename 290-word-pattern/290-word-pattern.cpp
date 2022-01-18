class Solution {
public:
    bool wordPattern(string pattern, string s) {
        map<char,string> mp; //is to store the assigned string for char from pattern
        map<string,bool> vis; //is to mark any string visited or not from s
        stringstream st(s);
        string word;
        int i=0;
        while(st>>word){
            char c=pattern[i];
            if(mp[c]!="" && mp[c]!=word ) //case 1
                return false;
            else if(mp[c]=="" && vis[word]==true) //case 2
                return false;
            else{ //case 3
                mp[pattern[i]]=word;
                vis[word]=true;
            }
            i++;
        }
        return i==pattern.size(); // case 4:
    }
};