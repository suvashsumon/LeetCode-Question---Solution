class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        map<int, int>mp;
        int sum = 0; 
        int ans = 0;
        int len = nums.size();
        mp[0] = 1;
        for(int i=0; i<len; i++)
        {
            sum += nums[i];
            int rem = sum - k;
            if(mp.find(rem)!=mp.end())
            {
                ans += mp[rem];
            }
            if(mp.find(sum)!=mp.end())
            {
                mp[sum]++;
            }
            else mp[sum] = 1;
        }
        return ans;
    }
};
