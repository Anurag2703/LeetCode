class Solution {
    public:
        int subarraysDivByK(vector<int>& nums, int k) {
            unordered_map<int,int>mp;
            mp[0]=1;
            int pSum=0, count=0;
            for(int i=0; i<nums.size(); i++){
                pSum += nums[i];
                int r = pSum%k;
                if(r<0)
                    r += k;
                if(mp.find(r) != mp.end()){
                    count += mp[r];
                    mp[r]++;
                }else mp[r]=1;
            }
            return count;
        }
};