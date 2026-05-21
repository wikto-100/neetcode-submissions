class Solution {
   public:
    vector<int> topKFrequent(vector<int>& nums, int k) {


        unordered_map<int,int> fc;
        vector<int> res(k);
        for(int i = 0 ; i < nums.size();i++)
            fc[nums[i]]++;
        vector<pair<int,int>> map_cpy(fc.begin(),fc.end());
        sort(map_cpy.begin(),map_cpy.end(),[](pair<int,int> &a, pair<int,int> &b){
                    return a.second > b.second;
        });
        for(int i = 0; i < k; i++)
            res[i] = map_cpy[i].first;
        return res;
    }
};
