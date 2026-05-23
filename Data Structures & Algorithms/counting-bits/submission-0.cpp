class Solution {
public:
    vector<int> countBits(int n) {
      // its either +1 or just 1 every log2-step
      vector<int> sol(n+1);

        for(int i = 0; i <= n; i++){
            sol[i] = __builtin_popcount(i);
        }
        return sol;
    }
};
