class Solution {
public:
    int findComplement(int num) {
        int n=log2(num)+1;
        return((pow(2,n)-num)-1);
        
      //  return pow(2,);
    }
};