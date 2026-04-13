class Solution {
public:
   int t[1001][1001];
    int longestStrChain(vector<string>& words) {
      memset(t,-1,sizeof(t));
      sort(words.begin(),words.end(),[](string a,string b){
        return a.size()<b.size();
      });
      
      return lis(words,-1,0);

    }
    bool isPred(string &prev, string &curr)
    {
        int i=0,j=0,n=curr.size(),m=prev.size();
        if((n-m)!=1) return false;
        while(i<n&& j<m)
        {
            if(prev[j]==curr[i])
            j++;
            
            i++;
        }
        return j==m;
    }
        int lis(vector<string>& words, int prev_idx, int curr_idx) {
       if(curr_idx == words.size())
           return 0;
        
        if(prev_idx != -1 && t[prev_idx][curr_idx] != -1)
            return t[prev_idx][curr_idx];
        
        int taken = 0;
        if(prev_idx == -1 || isPred(words[prev_idx], words[curr_idx]))
            taken = 1 + lis(words, curr_idx, curr_idx+1);
        
        int not_taken = lis(words, prev_idx, curr_idx+1);
        
        if(prev_idx != -1)
            t[prev_idx][curr_idx] =  max(taken, not_taken);
        
        return max(taken, not_taken);
            
    }

};