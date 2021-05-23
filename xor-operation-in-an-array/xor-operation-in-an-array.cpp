class Solution {
public:
    int xorOperation(int n, int start) {
        int s = (start&2), o=(n&1);
        n = n-(!s&&o);
        return ((!s!=!o)*(2*n+start))^((s!=0)*start +((1-s)*(n&2)));
    }
};