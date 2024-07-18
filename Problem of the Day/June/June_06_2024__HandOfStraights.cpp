class Solution {
    public:
        bool successors(vector<int>&hand, int g, int i, int n){
            int next = hand[i]+1, count=1;
            hand[i] = -1;
            i += 1;
            while(i<n && count<g){
                if(hand[i] == next){
                    next = hand[i]+1;
                    hand[i] = -1;
                    count++;
                }
                i++;
            }
            return (count == g);
        }

        // Question Function
        bool isNStraightHand(vector<int>& hand, int groupSize) {
            int n = hand.size();
            if(n%groupSize != 0)
                return false;
            sort(hand.begin(), hand.end());
            for(int i=0; i<n; i++)
                if(hand[i] >= 0)
                    if(!successors(hand, groupSize, i, n))
                        return false;

            return true;
        }
};