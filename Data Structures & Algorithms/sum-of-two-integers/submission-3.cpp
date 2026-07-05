class Solution {
public:
    int getSum(int a, int b) {
        unsigned bit = 1u, carry= 0u;
        int result = 0;
        do{
            result |= (a^b^carry)&bit; // 1 or 3
            carry = (((a&b)|(a&carry)|(b&carry)) & bit) << 1; // any 2 or 3

            //printf("a_bits=%08x b_bits=%08x result=%08x\n", a & bit, b & bit, result);

        }while((bit = bit << 1) < (1u << 31));
            result |= (a^b^carry)&bit; // 1 or 3
            carry = (((a&b)|(a&carry)|(b&carry)) & bit) << 1; // any 2 or 3
        return result;
    }
};
