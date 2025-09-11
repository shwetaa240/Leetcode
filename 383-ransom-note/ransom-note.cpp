class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int> mpp;
        for(auto &ch:magazine)
        {
            mpp[ch]++;
        }
        for(auto &i:ransomNote)
        {
            if(mpp[i]==0)
            return false;
            mpp[i]--;
        }
        return true;
    }
};