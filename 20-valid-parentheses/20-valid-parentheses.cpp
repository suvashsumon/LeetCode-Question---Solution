class Solution {
public:
    bool isValid(string s) {
        stack<char>stk;
        char right;
        if(s.size()<2) return false;
        stk.push(s[0]);
        for(int i=1; i<s.size(); i++)
        {
            if(s[i]==')' || s[i]=='}' || s[i]==']')
            {
                if(stk.empty()) return false;
                right = stk.top();
                cout << is_matched(s[i], right) << endl;
                if(!is_matched(s[i], right)) return false;
                stk.pop();
            }
            else
            {
                stk.push(s[i]);
            }
        }
        if(!stk.empty()) return false;
        return true;
    }
    
    bool is_matched(char c, char r)
    {
        cout << r << " " << c << endl;
        if(c==')' && r=='(') return true;
        else if(c=='}' && r=='{') return true;
        else if(c==']' && r=='[') return true;
        else return false;
    }
};