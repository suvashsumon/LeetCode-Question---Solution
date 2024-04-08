class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        vector<int>st(2, 0);
        int len = students.size();
        for(int i=0; i<len; i++) st[students[i]]++;
        for(int i=0; i<len; i++)
        {
            if(st[sandwiches[i]]==0) return len-i;
            st[sandwiches[i]]--;
        }
        return 0;
    }
};
