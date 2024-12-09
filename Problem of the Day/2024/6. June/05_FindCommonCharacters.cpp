class Solution {
    public:
        vector<string> commonChars(vector<string>& words) {
            array<char,26>freq, mini;
            mini.fill(100);
            for(auto& w: words){
                freq.fill(0);
                for(char c:w)
                    freq[c-'a']++;
                for(int i=0; i<26; i++)
                    mini[i] = min(freq[i], mini[i]);
            }
            vector<string>r;
            for(int i=0; i<26; i++)
                for(int j=0; j<mini[i]; j++)
                    r.push_back(string(1, i+'a'));

            return r;
        }
};