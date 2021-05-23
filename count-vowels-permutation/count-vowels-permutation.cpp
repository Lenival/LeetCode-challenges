class Solution {
public:
    int countVowelPermutation(int n) {
        long int resp = 0, q, r, i, j;
        n=n;
        long int s0[] = {-1,0,0,1,1}, s[] = {0,0,0,0,0};
        for(;n>0;n--){
            s[0] = (s0[4]+s0[2])%1000000007;
            s[1] = (s0[4]+s0[3]+s0[0])%1000000007;
            s[2] = (s0[4])%1000000007;
            s[3] = (s0[4]+s0[1])%1000000007;
            s[4] = (s0[3]+s0[2])%1000000007;
            std::swap(s, s0);
        }
        return (s0[0]+s0[1]+s0[2]+s0[3]+s0[4])%1000000007;

    }
};