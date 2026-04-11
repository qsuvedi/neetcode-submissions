class Solution {
public:
    bool isValid(string s) {
        //stack solution
        //TC: O(n)
        //SC: O(n)
        //stack for opening brackets
        std::stack<char> steak;
        //map of closing brackets to opening brackets
        std::unordered_map<char, char> closeToOpen = {
            {')', '('},
            {']', '['},
            {'}', '{'}
        };

        for (char c : s) {
            // if it's a closing bracket, it's a key
            if (closeToOpen.count(c)) {
                //if the top of the stack is the correlated opening bracket, pop it
                if (!steak.empty() && closeToOpen[c] == steak.top()) steak.pop();
                //if it's not the correlated opening bracket, then we have a closing bracket with out a related opening bracket, so this is not valid
                else return false;
            } else { // if it's an opening bracket, push it
                steak.push(c);
            }
        }
        //if there are any opening brackets left, we will return false, otherwise, everything has worked out, and we return true
        return steak.empty();

    }
};

