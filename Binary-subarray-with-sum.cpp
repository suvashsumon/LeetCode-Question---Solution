class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int len = nums.size();
        int ans = 0;
        map<int, int>mp;
        mp[0]++;
        int sum = 0;
        for(int i=0; i<len; i++)
        {
            sum+=nums[i];
            int rem = sum - goal;
            if(mp.find(rem)!=mp.end()) ans += mp[rem];

            if(mp.find(sum)!=mp.end()) mp[sum]++;
            else mp[sum] = 1;
        }
        return ans;
    }
};
