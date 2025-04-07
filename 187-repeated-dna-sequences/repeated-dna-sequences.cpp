class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        vector<string> res;
        unordered_set<string> seen;
        unordered_set<string> repeat;
        int i,n=s.size();
        for(i=0;i<=n-10;i++)
        {
            string t=s.substr(i,10);
            if(seen.count(t))
            repeat.insert(t);
            else
            seen.insert(t);
            
        }
        for(auto &i:repeat)
        res.push_back(i);
        return res;
    }
};