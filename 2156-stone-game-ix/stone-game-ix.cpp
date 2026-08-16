class Solution {
public:
    bool stoneGameIX(vector<int>& stones) {
        vector<int> counts(3, 0);
        
        for (int stone : stones) {
            counts[stone % 3]++;
        }
        
        int c0 = counts[0];
        int c1 = counts[1];
        int c2 = counts[2];
        
        if (c0 % 2 == 0) {
            return c1 > 0 && c2 > 0;
        } else {
            return abs(c1 - c2) >= 3;
        }
    }
};