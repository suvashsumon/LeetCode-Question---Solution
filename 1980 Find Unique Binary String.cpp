class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) {
        string ans;
        int len = nums.size();
        for(int i=0; i<len; i++)
        {
            char bit = nums[i][i];
            if(bit=='0') bit = '1';
            else bit = '0';
            ans+=bit;
        }
        return ans;
    }
};
