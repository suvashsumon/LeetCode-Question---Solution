class Solution {
public:
    string customSortString(string order, string s) {
        map<char, int>mpo, mps;
        int leno = order.size();
        int lens = s.size();
        for(int i=0; i<leno; i++) mpo[order[i]]++;
        string ans = "";
        for(int i=0; i<lens; i++)
        {
            if(mpo.find(s[i])!=mpo.end()) {mps[s[i]]++; cout << s[i] << endl;}
            else {ans+=s[i]; cout << s[i] << endl;}
        }
        cout << ans << endl;
        for(int i=0; i<leno; i++)
        {
            if(mps.find(order[i])!=mps.end())
            {
                for(int j=0; j<mps[order[i]]; j++) ans+=order[i];
            }
        }
        return ans;
    }
};
