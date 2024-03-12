class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        int len = target.size();
        int tp = 0;
        int np = 1;
        vector<string>ans;
        while(tp<len && np<=n)
        {
            if(target[tp]==np) {ans.push_back("Push"); tp++; np++;}
            else {ans.push_back("Push"); ans.push_back("Pop"); np++;}
        }
        return ans;
    }
};
