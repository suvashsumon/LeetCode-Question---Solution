class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int>::iterator it;
        for(auto it=nums.begin(); it!=nums.end(); it++)
        {
            if(val==*it)
            {
                nums.erase(it);
                it--;
            }
        }
        return nums.size();
    }
};