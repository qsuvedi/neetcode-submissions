class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> letters;
        for (char c : s) {
            ++letters[c];
        }
        for (char c : t) {
            --letters[c];
        }
        for (int i = 0; i < letters.size(); ++i) {
            if (letters[i] != 0) return false;
        }
        return true;
    }
};
