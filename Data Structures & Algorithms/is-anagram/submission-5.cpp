class Solution {
public:
    bool isAnagram(string s, string t) {
        // hash table using array method, TC: O(n + m) SC: O(1)

        //early length check skips wasting time processing strings that could never match
        if (s.length() != t.length()) return false;

        vector<int> count(26, 0);

        for (int i = 0; i < s.length(); ++i) {
            ++count[s[i] - 'a'];
            --count[t[i] - 'a'];
        }
        for (int val : count) {
            if (val != 0) return false;
        }

        return true;
    }
};
