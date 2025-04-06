class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char> mpp1;
         unordered_map<char,char> mpp2;
        int i=0,j=0,n=s.size(),m=s.size();
        char ch1,ch2;
        if(n!=m)
        return false;
         while(i<n)
         {
            if(mpp1.find(s[i])==mpp1.end() && mpp2.find(t[j])==mpp2.end())
           { mpp1[s[i]]=t[j];
             mpp2[t[j]]=s[i];
           }
           else if(mpp1.find(s[i])==mpp1.end())
           {
             mpp1[s[i]]=t[j];
           }
           else if(mpp2.find(t[j])==mpp2.end())
           {
            mpp2[t[j]]=s[i];
           }

            
               ch1=mpp1[s[i]];
               ch2=mpp2[t[j]];
               if(ch1!=t[j] ||ch2!=s[i])
                return false;
             i++;j++;
         }
         return true;
    }
};