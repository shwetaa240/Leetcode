class Solution {
    public int lengthOfLongestSubstring(String s) {
        int n = s.length();
        int maxlen = 0;
        int hash[]=new int[128];
         Arrays.fill(hash, -1);
        int l = 0,r=0;
        while(r<s.length())
        {
            char ch=s.charAt(r);
            if(hash[ch]!=-1)
            {
                if(hash[ch]>=l)
                l=hash[ch]+1;
            }
            hash[ch]=r; //store the index
            maxlen=Math.max(maxlen,r-l+1);
            r++;
        }
       return maxlen;
        }
     
        
 
}