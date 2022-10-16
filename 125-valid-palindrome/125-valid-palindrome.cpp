class Solution {
public:
    bool isPalindrome(string s) {
        string ss = "";
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]>='a' && s[i]<='z') ss += s[i];
            else if(s[i]>='A' && s[i]<='Z') ss += tolower(s[i]);
            else if(s[i]>='0' && s[i]<='9') ss += s[i];
        }
        string rs = ss;
        reverse(rs.begin(), rs.end());
        if(rs == ss) return true;
        else return false;
        
    }
};