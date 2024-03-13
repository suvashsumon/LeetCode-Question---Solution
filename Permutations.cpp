class Solution {
public:
    void backtrack(vector<vector<int>> &ans, vector<int>&nums, vector<int>&curr, vector<bool> &visited)
    {
        int numsize = nums.size();
        if(curr.size()==numsize)
        {
            ans.push_back(curr);
            return;
        }
        for (int i=0; i<numsize; i++)
        {
            if(visited[i]==true) continue;
            curr.push_back(nums[i]);
            visited[i] = true;
            backtrack(ans, nums, curr, visited);
            curr.pop_back();
            visited[i] = false;
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<bool> visited(nums.size(), false);
        vector<int>curr;
        backtrack(ans,nums,curr, visited);
        return ans;
    }
};
