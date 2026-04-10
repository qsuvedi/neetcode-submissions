class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        //hash map solution
        unordered_map<int, int> map;

        for (int i = 0; i < nums.size(); ++i) {
            int wanted = target - nums[i];
            if (map.contains(wanted)) return {map[wanted], i};
            map.insert({nums[i], i});
        }
    }
};
