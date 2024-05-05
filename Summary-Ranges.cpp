class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> ans;
        int a, b;
        int len = nums.size();
        if(len==0) return ans;
        a = nums[0];
        b = nums[0];
        for (int i = 1; i < len; i++) {
            if (nums[i - 1] != nums[i] - 1) {
                // push to vector
                if (a == b)
                    ans.push_back(to_string(a));
                else {
                    ans.push_back(to_string(a) + "->" + to_string(b));
                }
                a = nums[i];
                b = nums[i];
            } else {
                b = nums[i];
            }
        }
        if (a == b)
            ans.push_back(to_string(a));
        else {
            ans.push_back(to_string(a) + "->" + to_string(b));
        }
        //cout << a << " " << b << endl;
        return ans;
    }
};
