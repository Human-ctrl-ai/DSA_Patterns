class Solution {
public:
    int countPrimes(int n) {
        if(n <= 2) return 0;
        else {
            vector<bool> v(n, false);
            // for (int val : v) {
            //     std::cout << val << " ";
            // }

            int ans = n - 2;
            for(int i = 2; i * i < n; i++) {
                if(v[i] == false) {
                    for(int j = i * i; j < n; j += i) {
                        if(v[j] == false) {
                            v[j] = true;
                            ans -= 1;
                        }
                    }
                }
            }
            // for (int val : v) cout << val << " ";
            return ans;
        }
    }
};