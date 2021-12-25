class Solution {
public:
    int calculate(string s) {
        int res = 0, lhs = 0;
        int i = 0;
        char curr_op = '1';
        while (i < s.size()) {
            if (s[i] == ' ') { 
                ++i;
                continue;
            }
            if (s[i] >= '0' && s[i] <= '9') {
                int rhs = 0;
                while (s[i] >= '0' && s[i] <= '9') {
                    rhs = rhs * 10 + (s[i++] - '0');
                }
                if (curr_op == '/') {
                    lhs /= rhs;
                } else if (curr_op == '*') {
                   lhs *= rhs; 
                } else {
                    lhs = (curr_op == '-') ? -rhs : rhs;
                }
            } else {
                curr_op = s[i++];
                if (curr_op == '+' || curr_op == '-') {
                    res += lhs;
                }
            }
        }
        return res + lhs; 
    }
};