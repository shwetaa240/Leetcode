class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int> a(256,0),b(256,0);
        int n=s1.size(),m=s2.size();
        if(m<n) return false;
        for(int i=0;i<n;i++){
              a[s1[i]-'a']++;
              b[s2[i]-'a']++;
        }
        if(a==b)
        return true;
        int l=0;
       for(int r=n;r<m;r++)
       {

         b[s2[r]-'a']++;
         b[s2[l]-'a']--;
         l++;
         if(a==b)
          return true;
       }

       return false;
    }
};