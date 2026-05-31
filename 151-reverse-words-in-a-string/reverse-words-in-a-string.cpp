class Solution {
public:
    string reverseWords(string s) {
        string news="",word;
        stringstream ss(s);
 
        while(ss>>word)
        {
            news=word+' '+news;
        }
        news.erase(news.end()-1);
        return news;
        
    }
};