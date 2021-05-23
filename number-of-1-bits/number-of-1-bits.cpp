class Solution {
public:
    int hammingWeight(uint32_t n) {
        int out=0;
        for(;n;n&=(n-1)){
            out++;
        }
        return out;
    }
};