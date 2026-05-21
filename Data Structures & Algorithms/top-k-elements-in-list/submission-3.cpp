class Solution {
   public:
    vector<int> topKFrequent(vector<int>& nums, int k) {


        unordered_map<int,int> fc;
        vector<int> res(k);
        for(int num : nums)
            fc[num]++;
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> heap;
        for(const auto &[f,v] : fc){
            heap.push({v,f});
            if(heap.size() > k)
                heap.pop();
        }
        for(int i = 0; i < k; i++){
            res[i] = heap.top().second;
            heap.pop();
        }
        return res;
    }
};
