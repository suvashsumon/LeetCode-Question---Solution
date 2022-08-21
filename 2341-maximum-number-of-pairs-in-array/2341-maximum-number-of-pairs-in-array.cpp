class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        int n_list[101]={0};
        int n_pair = 0, leftover = 0;
        for(int i=0; i<nums.size(); i++)
        {
            if(n_list[nums[i]]!=0 && (n_list[nums[i]]+1)%2==0)
            {
                n_pair += (n_list[nums[i]]+1)/2;
                n_list[nums[i]] = 0;
            }
            else n_list[nums[i]]++;
        }
        for(int i=0; i<=100; i++)
        {
            if(n_list[i]!=0) leftover++;
            cout << n_list[i] << ' ';
        }
        
        vector<int>ans;
        ans.push_back(n_pair);
        ans.push_back(leftover);
        return ans;
    }
};