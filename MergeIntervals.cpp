// Interval
// Sorting - O(nlog(n))
// Else - O(n)
// Total - O(nlog(n)); best case - O(n)

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
        if (intervals.size() == 1) return intervals;
        
        vector<vector<int>> merged;
        
        if (intervals.size() == 0) return merged;
        
        std::sort(intervals.begin(), intervals.end());
        
        vector<int> temp = intervals[0];
        
        for (vector<int> vect : intervals) {
            if (vect[0] <= temp[1]) {
                temp[1] = max(vect[1], temp[1]);
            } else {
                merged.push_back(temp);
                temp = vect;
            }
        }
        
        merged.push_back(temp);
        return merged;
        
    }
};
