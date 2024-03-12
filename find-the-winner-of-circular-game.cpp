class Solution {
public:
    int findTheWinner(int n, int k) {
        queue<int>q;
        for(int i=1; i<=n; i++) q.push(i);
        int it = 0;
        while(q.size()>1)
        {
            int top = q.front();
            q.pop();
            it++;
            if(it<k) q.push(top);
            else it = 0;
        }
        return q.front();
    }
};
