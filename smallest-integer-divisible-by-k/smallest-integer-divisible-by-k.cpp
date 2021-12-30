class Solution {
public:
    int smallestRepunitDivByK(int k) {
        if(k%5==0 || k%2==0){
            return -1;
        }   
        //int ans=-1;
        long long int kval=1;
        for(int i=0;i<k;i++){
            if(kval%k==0){
               // ans=kval;
                return i+1; 
            }
            else{
                kval=(kval*10+1)%k;
            }
        }
        return -1;
    }
};