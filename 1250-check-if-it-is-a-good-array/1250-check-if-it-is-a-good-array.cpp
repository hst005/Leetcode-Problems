class Solution {
public:
    int gcd(int a,int b){
        if(a==0){
            return b;
        }
        if(b==0){
            return a;
        }
        
            return gcd(b%a,a);
       
    }
    
    int gcd(vector<int>& nums){
        if(nums.size()==1){
            return nums[0];
        }
        if(nums.size()==0){
            return 0;
        }
        int gcdans=nums[0];
        for(int i=1;i<nums.size();i++){
            gcdans=gcd(gcdans,nums[i]);
        }
        return gcdans;
    }
    bool isGoodArray(vector<int>& nums) {
        if(gcd(nums)==1){
            return true;
        }
        return false;
    }
};