class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int>::iterator it;
        int temp = nums[0];
        for(auto it=nums.begin()+1; it!=nums.end(); it++)
        {
            if(temp==*it)
            {
                nums.erase(it);
                it--;
            }
            else
            {
                temp = *it;
            }
        }
        return nums.size();
    }
};