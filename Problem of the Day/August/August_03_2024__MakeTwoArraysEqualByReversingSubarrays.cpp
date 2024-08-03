// Level: EASY

class Solution {
    public:
        bool canBeEqual(vector<int>& target, vector<int>& arr) {
            int frequency[1001] = {};
            for(int i : arr)
                frequency[i]++;

            for(int i : target)
                if(--frequency[i] < 0)
                    return false;

            return true;
        }
};