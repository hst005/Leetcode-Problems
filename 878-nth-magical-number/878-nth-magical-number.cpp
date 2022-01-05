class Solution {
    #define mod 1000000007
    #define ll long long 
public:
    int gcd(int a,int b){
        if(a>b){
            return gcd(b,a);
        }
        
        if(a==0){
            return b;
        }
        return gcd(b%a,a);
    }
    int nthMagicalNumber(int n, int a, int b) {
        //int lcm=(a*b)/gcd(a,b);
        ll lcm=(a*b)/__gcd(a,b);
        long long int low=1,high;
        high=1e17;
        
        ll mid;
        ll ans;
    while(low<high){
           mid = (low + high) / 2;
            ll poscheck=(mid/a)+(mid/b)-(mid/lcm);
            
            if(poscheck<n){
                low=mid+1;
            }
            else{
                ans=mid%mod;
                high=mid;
                
            }
            
        }

        return ans;
    }
//     int nthMagicalNumber(int n, int a, int b) {
//       ll low, mid, high, target;
      
//       long long lcm=(a*b)/gcd(a,b);
//       low = 1;
//       high = 1e17;
      
	 
	  
//       while (low < high) {
//         mid = (low + high) / 2;
//         target = (mid / a) + (mid / b) - (mid / lcm);
        
		
		
		
//         if (target < n) {
//           low = mid + 1;
//         } else {
//           high = mid;
//         }
//       }
      
//       return high % mod;
//     }
};