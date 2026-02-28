class Solution {
public:
    // Insertation Position
    int searchInsert(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1;
        
        while (left <= right) {
            int mid = left + (right - left) / 2;
            
            if (nums[mid] == target) {
                return mid;   // target found
            }
            else if (nums[mid] < target) {
                left = mid + 1;   // search right half
            }
            else {
                right = mid - 1;  // search left half
            }
        }
        
        // target not found, left is correct insert position
        return left;
    }
};