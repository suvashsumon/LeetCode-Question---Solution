class Solution {
public:
    // int sum(int a, int n)
    // {
    //     return ((2*a + n - 1)*n)/2;
    // }

    // int pivotInteger(int n) {
    //     int left = 1;
    //     int right = n;
    //     while(left<=right)
    //     {
    //         int mid = (left+right)/2;
    //         int leftsum = sum(1, mid);
    //         int rightsum = sum(mid, n-mid+1);
    //         //cout << leftsum << " " << rightsum << endl;
    //         if(leftsum<rightsum) left = mid+1;
    //         else if(leftsum>rightsum) right = mid - 1;
    //         else return mid;
    //     }
    //     return -1;
    // }

    int pivotInteger(int n)
    {
        float x = sqrt((n*(n+1))/2);
        if(x == int(x)) return x;
        else return -1;
    }
};
