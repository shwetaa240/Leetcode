class Solution {
public:
    int numberOfSpecialChars(string word) {
        unordered_map<char, int> mpp,mpp2;
        int cnt = 0;
        int n = word.size();
        for (int i = 0; i < n; i++) {
            if (isupper(word[i])) {
                char u = word[i];
                if(mpp2.find(u) == mpp2.end())
                    mpp2[u] = i;
            }
            else
            {
                mpp[word[i]] = i;
            }
        }
        for(char c='a';c<='z';c++)
        {   
        if(mpp.find(c)!=mpp.end() && mpp2.find(toupper(c))!=mpp2.end() && mpp2[toupper(c)]>mpp[c])
            cnt++; 
        }
        return cnt;
    }
};

//     class Solution {
// public:
//     int numberOfSpecialChars(string word) {
//         unordered_map<char, int> mpp;
//         int cnt = 0;
//         int n = word.size();
//         for (int i = 0; i < n; i++) {
//             if (islower(word[i])) {
//                 char l = word[i];
//                 if (mpp.find(l) == mpp.end())
//                     mpp[l] = i;
//             } else {
//                 char u = word[i];
//                 if (mpp.find(tolower(u)) != mpp.end() &&
//                     mpp[tolower(u)] < i) {
//                     cnt++;
//                 }
//             }
//         } return cnt;
//     }

//     };