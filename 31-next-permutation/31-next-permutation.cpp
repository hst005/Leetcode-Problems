class Solution {
public:
    /*
    a) Traverse from right and find the first item that is not following the descending order. For example in “abedc”, the character ‘b’ does not follow the descending order.
……….b) Swap the found character with closest greater (or smallest greater) element on right side of it. In case of “abedc”, we have ‘c’ as the closest greater element. After swapping ‘b’ and ‘c’, string becomes “acedb”.
……….c) After swapping, sort the string after the position of character found in step a. After sorting the substring “edb” of “acedb”, we get “acbde” which is the required next permutation.*/
    
    
  /*  void nextPermutation(vector<int>& nums) {
        int i=nums.size()-2;
        bool flag=true;
        for(i;i>=0;i--){
            if(nums[i]<nums[i+1]){
                flag=false;
                break;
            }
        }
        if(flag){
           sort(nums.begin(),nums.end());
            return ;
        }
        int l;
        for (l = nums.size()- 1; l > i; l--) {
                if (nums[l] > nums[i]) {
                    break;
                }
        } 
        swap(nums[i], nums[l]);
        sort(nums.begin()+i+1,nums.end(), greater<int>());
    }
    */
    void nextPermutation(vector<int>& nums) {
    	int n = nums.size(), k, l;
    	for (k = n - 2; k >= 0; k--) {
            if (nums[k] < nums[k + 1]) {
                break;
            }
        }
    	if (k < 0) {
    	    reverse(nums.begin(), nums.end());
    	} else {
    	    for (l = n - 1; l > k; l--) {
                if (nums[l] > nums[k]) {
                    break;
                }
            } 
    	    swap(nums[k], nums[l]);
    	    reverse(nums.begin() + k + 1, nums.end());
        }
    }
};