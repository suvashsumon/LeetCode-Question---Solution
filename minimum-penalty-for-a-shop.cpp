class Solution {
public:
    int bestClosingTime(string customers) {
        int len = customers.size();
        int yes = 0;
        int no = 0;
        for(int i=0; i<len; i++)
        {
            if(customers[i]=='Y') yes++;
        }
        pair<int, int>pr;
        pr = make_pair(yes+no, 0);
        for(int i=1; i<=len; i++)
        {
            if(customers[i-1]=='Y') yes--; // Y hole yes kombe
            else no++; // N hole no barbe

            if(yes+no<pr.first)
            {
                pr.first = yes+no;
                pr.second = i;
            }
            cout << pr.first << " "<< pr.second << endl;
        }
        return pr.second;
    }
};
