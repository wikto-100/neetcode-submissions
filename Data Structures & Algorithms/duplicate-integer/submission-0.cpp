class Solution {
   public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> uniq;
        for (const int& x : nums) uniq.insert(x);
        return uniq.size() != nums.size();
    }
};