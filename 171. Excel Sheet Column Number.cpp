class Solution {
public:
    int titleToNumber(string columnTitle) {
        // cout << columnTitle << "\n";
        // cout << columnTitle.size() << "\n";
        if(columnTitle.size() <= 1) return (int)columnTitle[0] - 64;
        else {
            int ans = 1;
            for(int i = 0; i < columnTitle.size() - 1; i++) {
                ans *= (26 * (((int)columnTitle[i]) - 64));
            }
            ans += (((int)columnTitle[columnTitle.size() - 1]) - 64);
            return ans;
        }
    }
};