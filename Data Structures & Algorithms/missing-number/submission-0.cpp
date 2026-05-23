class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        unsigned long long expected = n * (n + 1) >> 1;
        unsigned long long sum = 0;
        for(int i = 0; i < n;i++){
            sum += nums[i];
        }
        return expected - sum;
    }
};
