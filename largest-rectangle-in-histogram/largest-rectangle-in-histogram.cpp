class Solution {
public:
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
};