class Solution {
public:
    int canBeTypedWords(string text, string broken) {
        unordered_set<char> st(broken.begin(),broken.end());
        int count=0;
        string word;
        stringstream ss(text);
        while(ss >>word)
        {
            count++;
            for(char &ch:word)
            {
                if(st.count(ch))
                {count--;
                    break;
                }
            }
        }
        return count;
    }
};