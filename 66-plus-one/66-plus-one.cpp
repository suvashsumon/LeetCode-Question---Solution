class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int len = digits.size();
        int temp = 1;
        for(int i=len-1; i>=0; i--)
        {
            //cout << i << endl;
            int t = digits[i] + temp;
            if(t>=10)
            {
                digits[i] = t%10;
                //cout << digits[i] << endl;
                temp = t/10;
                //cout << temp << endl;
            }
            else
            {
                digits[i] = t;
                temp = 0;
                break;
            }
            
        }
        if(temp>0){
            digits.insert(digits.begin(), temp);
        }
        
        return digits;
    }
};