class Solution {
public:
    vector<long long> findPrefixScore(vector<int>& nums) {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(NULL);
        std::cout.tie(NULL);
        vector<long long>ans;
        int mx = nums[0];
        int len = nums.size();
        ans.push_back(nums[0]*2);
        for(int i=1; i<len; i++)
        {
            mx = max(mx, nums[i]);
            ans.push_back(mx+nums[i]+ans[i-1]);
        }
        return ans;
    }
};
