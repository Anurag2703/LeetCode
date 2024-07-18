class Solution {
    public:
        string replaceWords(vector<string>& dictionary, string sentence) {
            set<string>s(begin(dictionary), end(dictionary));
            istringstream iss(sentence);
            vector<string>v;
            string word, r;

            while(iss>>word)
                v.push_back(word);
            
            for(string t : v){
                int i=0;
                while(i++ <= t.length()){
                    string curr = t.substr(0,i);
                    if(s.find(curr) != s.end()){
                        r += curr + " ";
                        break;
                    }
                    if(i == t.length())
                        r += curr + " ";
                }
            }
            r.erase(r.size() - 1);
            return r;
        }
};