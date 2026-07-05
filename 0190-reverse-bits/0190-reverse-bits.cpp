class Solution {
public:
    int reverseBits(int n) {
        uint32_t ans = 0;

        for (int i = 0; i < 32; i++) {
        ans <<= 1;          // Make space for next bit
        ans |= (n & 1);     // Copy last bit of n
        n >>= 1;            // Remove that bit from n
    }

    return ans;
    }
};