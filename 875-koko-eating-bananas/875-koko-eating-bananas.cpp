class Solution {
public:
    int check(vector<int>& piles,int h){
       int ans=0;
        if(h==0){
            return INT_MAX;
        }
        for(int i=0;i<piles.size();i++){
            ans+=piles[i]/h;
            if(piles[i]%h!=0){
                ans++;
            }
        }
        return ans;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int ans=INT_MAX;
        int mid;
        
        long long sum=0;
        
        int start,high=INT_MIN;
        for(int i=0;i<piles.size();i++){
            sum+=piles[i];
            high=max(high,piles[i]);
        }
        start=sum/h;
        
        
        while(start<high){
            mid=start+(high-start)/2;
            
            int temp=check(piles,mid);
            if(temp<=h){
                //ans=mid;
                high=mid;
            }
            else{
                start=mid+1;
            }
        }
        return high;
    }
};