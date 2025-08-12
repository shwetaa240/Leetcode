class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
       int cnt=0;
       for(char c:stones)
       {
        if(findme(jewels,c))
        cnt++;
       } 
       return cnt;
    }
    bool findme(string jew,char ch)
    {
      for(char c:jew)
      {
        if(c==ch)
        return true;
      }
      return false;
    }
};