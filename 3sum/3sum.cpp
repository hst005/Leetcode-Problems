class Solution {
public:
   /* vector<vector<int>> threeSum(vector<int>& nums) {
        //unordered_map <int,int> umap;
        vector <vector <int> > ans;
        sort(nums.begin(),nums.end());
        if( nums.size()<3){
            return ans;
        }
        if(nums[0]==nums[nums.size()-1] ){
            if(nums[0]==0){
                ans.push_back({0,0,0});
                
            }
            return ans;
        }
        for(int i=0;i<nums.size();i++){
            if(i>0 && nums[i]==nums[i-1]){
                continue;
            }
            if (nums[i] > 0) break;
            int l=i+1,r=nums.size()-1;
            while(l<r){
                int s=nums[i]+nums[l]+nums[r];
                if(s<0){
                    l++;
                }
                else if(s>0){
                    r++;
                }
                else{
                    ans.push_back({nums[i],nums[l],nums[r]});
                    while(l<nums.size()-1 && nums[l]==nums[l+1]){l++;}
                    while(r>0 && nums[r]==nums[r-1]){r++;}
                    l++;
                    r--;
                }
            }
            
            
        }
        return ans;
    }*/
    vector<vector<int>> threeSum(vector<int>& nums) {
	vector<vector<int>> result;
	if (nums.empty()) {
		return result;
	}

	int ns = nums.size();
	sort(nums.begin(), nums.end());
	for (int i = 0; i < ns; ++i) {
		
		if (nums[i] > 0) break;

		if (i > 0 and nums[i] == nums[i-1]) continue;

		int left = i+1, right = ns - 1;
		while (left < right) {
			int sum = nums[i] + nums[left] + nums[right];
			if (sum < 0) {
				++left;
			} else if (sum > 0) {
				--right;
			} else {
				result.push_back({nums[i], nums[left], nums[right]});
				int last_left = nums[left], last_right = nums[right];
				while (left < right && nums[left] == last_left) ++left;
				while (left < right && nums[right] == last_right) --right;
			}
		}

	}
	return result;
}
};