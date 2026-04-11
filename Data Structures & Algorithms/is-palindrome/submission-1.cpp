class Solution {
public:
    bool isPalindrome(string s) {
        //two pointer method TC: O(n), SC: O(1)

        int i = 0; int j = s.length() - 1;
        while (i < j) {
            //find valid characters to compare
            while (i < j && !isAlphaNum(s[i])) ++i;
            while (i < j && !isAlphaNum(s[j])) --j;
            //compare them
            if (tolower(s[i]) != tolower(s[j])) return false;
            // if they were the same, keep going
            ++i; --j;
        }

        return true;
    }

    bool isAlphaNum(char c) {
        return (c >= 'A' && c <= 'Z' ||
                c >= 'a' && c <= 'z' ||
                c >= '0' && c <= '9');
    }
};
