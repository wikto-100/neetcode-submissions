class Solution {
public:
    int hammingWeight(uint32_t n) {
        int hw = 0;
        do {
            hw += n & 1;
        } while(n >>= 1);
        return hw;
    }
};
