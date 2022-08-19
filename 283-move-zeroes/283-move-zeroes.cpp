class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int>::iterator it;
        int cnt = 0;
        for(auto it=nums.begin(); it!=nums.end(); it++)
        {
            if(*it==0){
                nums.erase(it);
                it--;
                cnt++;
            }
        }
        for(int i=0; i<cnt; i++) nums.push_back(0);
    }
};