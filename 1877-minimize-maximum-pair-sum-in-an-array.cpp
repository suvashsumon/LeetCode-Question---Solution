class Solution {
public:
    int minPairSum(vector<int>& nums) {
        int len = nums.size();
        sort(nums.begin(), nums.end());
        int mx = 0;
        int n = len/2;
        int j = len-1;
        for(int i=0; i<n; i++)
        {
            mx = max(mx, nums[i]+nums[j]);
            j--;
        }
        return mx;
    }
};
