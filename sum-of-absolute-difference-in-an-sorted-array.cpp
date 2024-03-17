class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        int len = nums.size();
        int sum = 0;
        vector<int>leftsum, rightsum;
        for(int i=0; i<len; i++)
        {
            sum+=nums[i];
            leftsum.push_back(sum);
        }
        // for(int i=0; i<len; i++)
        // {
        //     rightsum.push_back(sum);
        //     sum-=nums[i];
        // }
        vector<int>ans;
        int lsum, rsum=sum;
        for(int i=0; i<len; i++)
        {
            lsum = (i-1)<0?0:leftsum[i-1];
            rsum = rsum-nums[i];
            ans.push_back(i*nums[i]-lsum+rsum-(len-i-1)*nums[i]);
        }
        return ans;
    }
};
