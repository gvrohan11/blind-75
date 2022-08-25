// String
// O(nlog(n)) - O(n) is everything except sorting the string, O(nlog(n)) is for sorting the string

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        vector<string> copy = strs;
        
        for (int i = 0; i < copy.size(); i++) {
            std::sort(copy[i].begin(), copy[i].end());
        }
        
        map<string, vector<string>> map;
        
        for (int i = 0; i < copy.size(); i++) {
            if (map.find(copy[i]) != map.end()) {
                map[copy[i]].push_back(strs[i]);
            } else {
                map[copy[i]] = {strs[i]};
            }
        }
        
        vector<vector<string>> vect;
        
        for (auto i : map) {
            vect.push_back(i.second);
        }
        
        return vect;
    }
};
