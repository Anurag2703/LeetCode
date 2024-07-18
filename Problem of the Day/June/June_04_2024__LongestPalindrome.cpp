class Solution {
    public:
        int longestPalindrome(string s) {
            unordered_set<char>c;
            int len=0;
            for(char ch : s){
                if(c.find(ch) != c.end()){
                    c.erase(ch);
                    len += 2;
                }else c.insert(ch);
            }

            if(!c.empty())
                len += 1;

            return len;
        }
};