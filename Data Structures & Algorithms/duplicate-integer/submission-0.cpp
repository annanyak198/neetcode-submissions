class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> hash;

        for (int num : nums) {
            if (hash.count(num)) {
                return true;
            } else {
                hash.insert(num);
            }
        }
        return false;
    }
};