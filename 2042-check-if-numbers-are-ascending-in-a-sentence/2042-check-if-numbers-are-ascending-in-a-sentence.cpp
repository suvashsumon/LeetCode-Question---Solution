class Solution {
public:
    bool checkStrings(string prev, string current)
    {
        if(prev.size() > current.size()) return false;
        else if (prev==current) return false;
        else if(prev.size() < current.size()) return true;
        else {
            for(int i=0; i<prev.size(); i++)
            {
                cout << "i am here" << endl;
                if(prev[i]>current[i])
                {
                    cout << prev[i] << current[i] << endl;
                    return false;
                }
                else if(prev[i]<current[i]) return true;
            }
            return true;
        }
    }
    
    bool areNumbersAscending(string s) {
        stringstream ss(s);
        string word;
        string prev = "0";
        bool flag = false;
        while(ss >> word)
        {
            if(isdigit(word[0]))
            {
                flag = checkStrings(prev, word);
                cout << prev << "<" << word << " : " << flag << endl << endl;
            }
            else continue;
            if(flag)
            {
                prev = word;
            }
            else return false;
        }
        return true;
    }
};