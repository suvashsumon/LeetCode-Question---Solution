class Solution {
public:
    int triangularSum(vector<int>& nums) {
        int len = nums.size();
        vector<vector<int>>vals;
        vals.push_back(nums);
        for(int i=1; i<len; i++)
        {
            vector<int>temp;
            for(int j=1; j<vals[i-1].size(); j++)
            {
                temp.push_back((vals[i-1][j-1]+vals[i-1][j])%10);
            }
            vals.push_back(temp);
        }
        
        return vals[len-1][0];
    }
};