class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        vector<int>kk;
        vector<int>ans;
        while(true)
        {
            if(k==0) break;
            int temp = k%10;
            kk.insert(kk.begin(),temp);
            k = k/10;
        }
        int lnum = num.size();
        int lkk = kk.size();
        int mx = max(lnum, lkk);
        for(int i=lnum; i<mx; i++) num.insert(num.begin(), 0);
        for(int i=lkk; i<mx; i++) kk.insert(kk.begin(), 0);
        int temp = 0;
        for(int i=mx-1; i>=0; i--)
        {
            int m = num[i]+kk[i]+temp;
            ans.insert(ans.begin(), m%10);
            temp = m/10;
        }
        if(temp!=0) ans.insert(ans.begin(), temp);
        return ans;
    }
};