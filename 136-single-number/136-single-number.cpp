class Solution {
public:
    int singleNumber(vector<int>& A) {
    int ans = 0;
    int n=A.size();
    for (int i = 0; i<n; i++)
    {
		ans ^=A[i];
    }
	return ans;
    }
};