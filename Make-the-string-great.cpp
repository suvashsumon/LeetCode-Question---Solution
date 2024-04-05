class Solution {
public:
    string makeGood(string s) {
        string ans = "";
        ans.push_back(s[0]);
        int len = s.size();
        for(int i=1; i<len; i++)
        {
            char a;
            if(ans!="")
            {
                a = ans.back();
                if(a==s[i]+32 || a==s[i]-32)
                {
                    ans.pop_back();
                }
                else ans.push_back(s[i]);
            }
            else ans.push_back(s[i]);
        }
        return ans;
    }
};
