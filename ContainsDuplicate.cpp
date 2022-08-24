// Array
// Hashset - O(n)
// Sorting - O(n) if sorted; O(nlog(n)) if not

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
        // Hashset solution
        set<int> set;
        for (int i : nums) {
            if (set.find(i) != set.end()) return true;
            else set.insert(i);
        }
        return false;
        
        /* Sorting solution 
        std::sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size() - 1; i++) if (nums[i] == nums[i + 1]) return true;
        return false;
        */
    }
};
