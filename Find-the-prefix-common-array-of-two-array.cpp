class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int len = A.size();
        vector<int>ans(len, 0);
        set<int>st;
        for(int i=0; i<len; i++)
        {
            int temp = 0;
            if(st.find(A[i])!=st.end())
            {
                temp++;
            }
            else st.insert(A[i]);

            if(st.find(B[i])!=st.end())
            {
                temp++;
            }
            else st.insert(B[i]);
            if(i>0) ans[i] = ans[i-1] + temp;
            else ans[i] = temp;
        }
        return ans;
    }
};
