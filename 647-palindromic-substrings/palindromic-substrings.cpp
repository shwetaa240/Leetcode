class Solution {
public:

    int countSubstrings(string s) {
       
       int l=1,i,j=0,c=0,n=s.size();
vector<vector<int>>dp (n,vector<int>(n,0));
       for(l=1;l<=n;l++)
       {
        for(i=0;i+l-1<n;i++)
          {
            j=i+l-1;
            if(i==j) dp[i][j]=1;
            else if(i+1==j)
            {
              dp[i][j]=(s[i]==s[j]);
            }
            else
            dp[i][j]= ((s[i]==s[j] )&& dp[i+1][j-1]);
            
            if(dp[i][j])
           c++;   
        
          } 
        }
       return c;
    }
};

