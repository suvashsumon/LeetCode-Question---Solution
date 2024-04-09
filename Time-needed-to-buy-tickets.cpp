class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int ans = 0;
        int len = tickets.size();
        int flag = tickets[k];
        for(int i=0; i<len; i++)
        {
            if(i<=k)
            {
                if(tickets[i]<=flag) ans+=tickets[i];
                else ans+=flag;
            }
            else 
            {
                if(tickets[i]<=flag) ans+=tickets[i];
                else ans+=flag;
                if(tickets[i]>=flag) ans--;
            }
            
        }
        return ans;
    }
};
