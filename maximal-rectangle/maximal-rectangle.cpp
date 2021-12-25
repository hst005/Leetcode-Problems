class Solution {
public:
    int maximalRectangle(vector<vector<char>>& mat) {
        int n=mat.size();
        if(n==0){
            return 0;
        }
        int m=mat[0].size();
        //if(n>0)
        
        vector <int> rows(m,0);
        int ansmax=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(mat[i][j]=='0'){
                    rows[j]=0;
                }
                else{
                    rows[j]++;
                }
            }
            ansmax=max(ansmax,largestRectangleArea(rows));
        }
        return ansmax;
    }
    
     int largestRectangleArea(vector<int>& a) {
        int n=a.size();
        int left[n],right[n];
        stack <int> st;
        for(int i=0;i<n;i++){
            while(!st.empty() && a[st.top()]>=a[i]){
                st.pop();
            }
            if(st.empty()){
                left[i]=0;
            }
            else{
                left[i]=st.top()+1;
            }
            st.push(i);
        }
        while(!st.empty()){
            st.pop();
        }
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && a[st.top()]>=a[i]){
                st.pop();
            }
            if(st.empty()){
                right[i]=n-1;
            }
            else{
                right[i]=st.top()-1;
            }
            st.push(i);
        }
        
        int ansmax=0;
        
        // for(int i=0;i<n;i++){
        //     cout<<left[i]<<" ";
        // }
        // cout<<endl;
        //  for(int i=0;i<n;i++){
        //      cout<<right[i]<<" ";
        //  }
        for(int i=0;i<n;i++){
            ansmax=max(ansmax,(right[i]-left[i]+1)*a[i]);
        }
        return ansmax;
    }
    
    
    
    //         vector <vector<int>> temp;
//         int n=matrix.size();
//         int m=matrix[0].size();
//         for(int i=0;i<n;i++){
//             for(int j=0;j<m;j++){
//                 if(i==0){
//                     if(matrix[i][j]=='0')
//                     temp[i][j]=0;
//                     else{
//                         temp[i][j]=1;
//                     }
//                     continue;
//                 }
//                 // if(matrix[i][j]=='0'){
//                 //     temp[i][j]=0;
//                 // }
//                 // else{
//                 //     temp[i][j]=temp[i-1][j]+1;
//                 // }
//             }
//         }
        
//         // for(int i=0;i<n;i++){
//         //     for(int j=0;j<m;j++){
//         //       cout<<temp[i][j]<<" ";
//         //     }
//         //     cout<<endl;
//         // }
        
//         return 0;
};