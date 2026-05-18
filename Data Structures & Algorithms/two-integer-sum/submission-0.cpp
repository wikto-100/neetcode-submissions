class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> ts;

        for(int i = 0; i < nums.size(); i++){

            if(ts.find(target-nums[i]) == ts.end()){
                ts.insert({nums[i],i});
            }else{
                return {ts[target-nums[i]],i};
            }
        }
        return {};
    }
};
