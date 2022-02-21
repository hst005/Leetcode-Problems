class Solution {
public:
    int majorityElement(vector<int>& a) {
        int n=a.size();
        int ele=0;int coun=0;
        for(int i=0;i<n;i++){
            if(a[i]==ele){
                coun++;
            }
            else if(coun==0){
                ele=a[i];
                coun=1;
            }
            else{
                coun--;
            }
        }
        return ele;
        
    }
};