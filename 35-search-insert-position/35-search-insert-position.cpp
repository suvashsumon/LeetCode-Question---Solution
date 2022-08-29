class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int ans;
        int low = 0;
        int high = nums.size();
        if(nums[0]>target) return 0;
        if(nums[high-1]<target) return high;
        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (nums[mid] == target)
            return mid;

            if (nums[mid] < target)
            low = mid + 1;

            else
            high = mid - 1;
            
            if(low>high) {
                return low;
            }
        }

        return -1;
    }
};