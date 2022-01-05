class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int n=nums.size();
        int mult=9999;
        vector <int> count,res;
        for(int i=0;i<n;i++){
            nums[i]*=mult;
            //cout<<nums[i]<<endl;
        }
        nums.push_back(0);
        for(int i=0;i<n;i++){
            int newval,oldval;
            oldval=nums[i]/mult;
            int indexoldval,indexnewval;
           // cout<<"originally at "<<oldval<<" is "<<nums[oldval]<<" ";
            indexoldval=nums[oldval]/mult;
            indexnewval=nums[oldval]%mult;
            indexnewval++;
            nums[oldval]=mult*indexoldval+indexnewval;
           //cout<<" and then "<< nums[oldval]<<endl;
        }
        for(int i=0;i<=n;i++){
            nums[i]=nums[i]%mult;
          //  cout<<nums[i]<<endl;
        }
        for(int i=0;i<=n;i++){
            if(nums[i]>1){
                res.push_back(i);
            }
        }
        return res;
    }
};