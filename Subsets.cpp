class Solution {
public:
    void backtrack(int index, vector<int>&subset, vector<int>&nums, vector<vector<int>>&ans)
    {
        if(index==nums.size())
        {
            ans.push_back(subset);
            return;
        }

        backtrack(index+1, subset, nums, ans);

        subset.push_back(nums[index]);
        backtrack(index+1, subset, nums, ans);
        subset.pop_back();
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>subset;
        vector<vector<int>>ans;
        backtrack(0, subset, nums, ans);
        return ans;
    }
};
