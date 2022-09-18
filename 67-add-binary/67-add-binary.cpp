class Solution {
public:
    string addBinary(string a, string b) {
        int la = a.length();
        int lb = b.length();
        int mx = max(la, lb);
        for(int i=mx-la-1; i>=0; i--) a = '0' + a;
        for(int i=mx-lb-1; i>=0; i--) b = '0' + b;
        string ans = "";
        char temp = '0';
        for(int i=mx-1; i>=0; i--)
        {
            if(temp=='0')
            {
                if(a[i]==b[i] && a[i]=='0')
                {
                    ans += '0';
                    temp = '0';
                }
                else if(a[i]==b[i] && b[i]=='1')
                {
                    ans += '0';
                    temp = '1';
                }
                else
                {
                    ans += '1';
                    temp = '0';
                }
            }
            else
            {
                if(a[i]==b[i] && a[i]=='0')
                {
                    ans += '1';
                    temp = '0';
                }
                else if(a[i]==b[i] && b[i]=='1')
                {
                    ans += '1';
                    temp = '1';
                }
                else
                {
                    ans += '0';
                    temp = '1';
                }
            }
        }
        reverse(ans.begin(), ans.end());
        if(temp == '1') ans = temp + ans;
        
        return ans;
    }
};