// Level: MEDIUM

int mod = 1e9+7;

class Solution {
    public:
        int numTilings(int n) {
            vector<int>v = {1, 1, 2};
            if(n < 3) return v[n];
            for(int i = 3; i <= n; i++){
                long long x = (2LL*v[2] + v[0])%mod;
                v = {v[1], v[2], (int)x};
            }
            return v[2];
        }
};