class Solution {
public:
    vector<int> tokenizer(string s, char del) {
        stringstream ss(s);
        string word;
        vector<int>vec;
        while (!ss.eof()) {
            getline(ss, word, del);
            // cout << word << endl;
            vec.push_back(stoi(word));
        }
        return vec;
    }

    int compareVersion(string version1, string version2) {
        vector<int> v1 = tokenizer(version1, '.');
        vector<int> v2 = tokenizer(version2, '.');

        int len1 = v1.size();
        int len2 = v2.size();

        int mx = max(len1, len2);
        for(int i=0; i<mx; i++)
        {
            int val1 = len1>i?v1[i]:0;
            int val2 = len2>i?v2[i]:0;

            if(val1<val2) return -1;
            else if (val1>val2) return 1;
        }
        return 0;
        
    }
};
