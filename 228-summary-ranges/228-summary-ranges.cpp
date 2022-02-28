class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        int n = nums.size();
        if( n == 0)
            return {};
        if(n == 1)
            return {to_string(nums[0])};
        int i = 0, j, count;
        vector<string> ranges;
        while(i < n ){
            count = 0;
            j = i;
            while(j < n - 1 && nums[j] + 1 == nums[j+1]){
                count++;
                j++;
            }//end while
            if(count == 0){
                ranges.push_back(to_string(nums[i]));
                i++;
            }//end if
            else{
                string s="";
                s = to_string(nums[i]) + "->" + to_string(nums[j]);
                ranges.push_back(s);
                i = j + 1;
            }//end else
        }//end while
        return ranges;
    }
};