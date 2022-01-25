class Solution {
public:
    bool validMountainArray(vector<int>& A) {
        int n=A.size();
        if(n<3){
            return false;
        }
       /* int flag=0;
        
        for(int i=1;i<n-1;i++){
            if(a[i]>a[i-1] && a[i]>a[i+1]){
                flag++;
            }
        }
        if(a[n-2]<=a[n-1] && flag!=0){
            return false;
        }
        if(flag==1){
            return true;
        }
        return false;*/
           int  i = 0, j = n - 1;
        while (i + 1 < n && A[i] < A[i + 1]) i++;
        while (j > 0 && A[j - 1] > A[j]) j--;
        return i > 0 && i == j && j < n - 1;
    }
};