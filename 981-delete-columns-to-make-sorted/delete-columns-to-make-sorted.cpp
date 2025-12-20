class Solution {
public:
    int minDeletionSize(vector<string>& str) {
        int i,j,cols=str[i].size(),rows=str.size(),del=0;

      for(j=0;j<cols;j++)
      {
        for(i=0;i<rows-1;i++)
        {
            if(int(str[i][j])>int(str[i+1][j]))
            {
              del++;
              break;
            }
        }
      }
        return del;
    }
};