class Solution {
public:
    bool isValid(string s) {
        //brute force solution
        //TC: O(n^2) because it loops through for each parentheses 
        //SC: O(n) because string is passed by value
        while (true) {
            size_t pos = string::npos;
            if ((pos = s.find("()")) != string::npos) {
                s.erase(pos, 2);
                continue;
            }
            if ((pos = s.find("[]")) != string::npos) {
                s.erase(pos, 2);
                continue;
            }
            if ((pos = s.find("{}")) != string::npos) {
                s.erase(pos, 2);
                continue;
            }
            //if didn't find anything
            break;
        }
        return s.empty();
        
    }
};
