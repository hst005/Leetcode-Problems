class Solution {
public:
    int scoreOfParentheses(string s) {
        int depth = 0, res = 0;
        char prev = '(';
        
        for (const char &ch: s) {
            if (ch == '(')
                depth++;
            else {
                depth--;
                if (prev == '(')
                    res += 1<<depth;
            }
            
            prev = ch;
        }
        
        return res;
    }
};