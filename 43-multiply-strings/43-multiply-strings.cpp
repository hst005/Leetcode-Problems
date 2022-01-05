class Solution {
public:
//     string multiplysmall(string num1,char digit){
//         int dignum=digit-'0';
//         int carry=0;
//         string ans="";
//         int i=num1.length()-1;
//         while(i>=0){
//             int num=num1[i]-'0';
//             int mult=num*dignum;
//             mult=mult+carry;
//             int currdig;
//             if(mult>9){
//                 carry=mult/10;
//                 currdig=mult%10;
//                 // char currchar=currdig+'0';
//                 // ans=(currchar)+ans;
//             }
//             else{carry=0;
//                  currdig=mult;
                
//                 }
//             char currchar=currdig+'0';
//                 ans=(currchar)+ans;
//             i--;
            
//         }
//         return ans;
//     }
//     string add(string str1, string str2) {
//         if (str1.length() > str2.length())
//         swap(str1, str2);
//         string str = "";
//         int n1 = str1.length(), n2 = str2.length();
//         reverse(str1.begin(), str1.end());
//         reverse(str2.begin(), str2.end());
 
//         int carry = 0;
//         for (int i=0; i<n1; i++)
//         {
//             int sum = ((str1[i]-'0')+(str2[i]-'0')+carry);
//             str.push_back(sum%10 + '0');
//             carry = sum/10;
//         }

//         for (int i=n1; i<n2; i++)
//         {
//             int sum = ((str2[i]-'0')+carry);
//             str.push_back(sum%10 + '0');
//             carry = sum/10;
//         }
//         if (carry)
//             str.push_back(carry+'0');
//         reverse(str.begin(), str.end());

//         return str;
//     }
    
//     string multiply(string num1, string num2) {
//         string ans="";
//         for(int i=num2.length()-1;i>=0;i--){
//             string temp=multiplysmall(num1,num2[i]);
//             for(int j=num2.length()-1;j>i;j--){
//                 temp=temp+'0';
//             }
//             ans=add(ans,temp);
//         }
//         return multiplysmall(num1,num2[0]);
//     }
    string multiply(string num1, string num2) {
    string sum(num1.size() + num2.size(), '0');
    
    for (int i = num1.size() - 1; 0 <= i; --i) {
        int carry = 0;
        for (int j = num2.size() - 1; 0 <= j; --j) {
            int tmp = (sum[i + j + 1] - '0') + (num1[i] - '0') * (num2[j] - '0') + carry;
            sum[i + j + 1] = tmp % 10 + '0';
            carry = tmp / 10;
        }
        sum[i] += carry;
    }
    
    size_t startpos = sum.find_first_not_of("0");
    if (string::npos != startpos) {
        return sum.substr(startpos);
    }
    return "0";
}
};