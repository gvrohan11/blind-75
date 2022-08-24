// Array
// O(nlog(n))
// If Sorted - O(n)

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::sort(nums.begin(), nums.end());
        int l = 0;
        int r = nums.size() - 1;
        // vector<int> vect;
        while (l < r) {
            int sum = nums[l] + nums[r];
            if (sum > target) r--;
            else if (sum < target) l++;
            else break;
        }
        return {l, r};
    }
};
