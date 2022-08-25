// String
// O(n) - n is the length of both s and t

class Solution {
public:
    bool isAnagram(string s, string t) {
        
        if (s.length() != t.length()) return false;
        
        if (s.length() == 0 && s.length() == 0) return true;
        
        map<char, int> s_map;
        for (char c : s) {
            if (s_map.find(c) != s_map.end()) s_map[c]++;
            else s_map[c] = 1;
        }
        
        map<char, int> t_map;
        for (char c : t) {
            if (t_map.find(c) != t_map.end()) t_map[c]++;
            else t_map[c] = 1;
        }
        
        for (auto i : s_map) {
            if (i.second != t_map[i.first]) return false;
        }
        
        return true;
    }
};
