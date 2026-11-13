class Solution {
public:
    int titleToNumber(string ct) {
        int ans = 0;
        for(int i = 0, j = 1; i < ct.size(); i++, j++) {
            int n = (int)ct[i] - 64;
            ans += n * (pow(26, ct.size() - j));
        }
        return ans;
    }
};