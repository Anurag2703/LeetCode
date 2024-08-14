class Solution {
    public:
        int removeElement(vector<int>& nums, int val) {
            int n = nums.size();
            int s = 0;

            for(int i=0; i<n; i++)
                if(nums[i] != val){
                    nums[s] = nums[i];
                    s++;
                }

            return s;
        }
};