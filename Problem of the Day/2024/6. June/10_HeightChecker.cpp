// Level: EASY

class Solution {
    public:
        int heightChecker(vector<int>& heights) {
            vector<int>expected;
            for(int i=0; i<heights.size(); i++)
                expected.push_back(heights[i]);

            sort(heights.begin(), heights.end());
            int count=0;
            for(int i=0; i<heights.size(); i++)
                if(expected[i] != heights[i])
                    count++;

            return count;
        }
};