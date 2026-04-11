class Solution {
public:
    bool isPalindrome(string s) {
        // reverse the string method

        //TC: O(n), SC: O(n)

        string newStr = "";
        for (char c : s) {
            if (isalnum(c)) {
                newStr += tolower(c);
            }
        }
        return newStr == string(newStr.rbegin(), newStr.rend());
    }
};
