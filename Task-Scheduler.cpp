class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        int len = tasks.size();
        vector<int>frequency(26, 0);
        int maxFreq = 0;
        for(int i=0; i<len; i++)
        {
            frequency[tasks[i]-'A']++;
        }
        sort(frequency.begin(), frequency.end());
        maxFreq = frequency[25];
        int idletime = (maxFreq - 1) * n;
        for(int i = 0; i<25; i++)
        {
            idletime -= min(maxFreq-1, frequency[i]);
        }
        idletime = max(0, idletime);
        return idletime+len;
    }
};
