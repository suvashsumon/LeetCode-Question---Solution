class Solution {
public:
    int minOperations(int n) {
        int sum = 0;
        for(int i=0; i<n; i++) sum += (2*i)+1;
        int avg = sum/n;
        sum = 0;
        n = n/2;
        for(int i=0; i<n; i++)
        {
            sum += avg-(2*i)-1;
        }
        return sum;
    }
};
