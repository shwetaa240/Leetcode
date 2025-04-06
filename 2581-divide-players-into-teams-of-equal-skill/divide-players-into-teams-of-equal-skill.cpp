class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        int i,j,n=skill.size(),sum=0,prev=0;
        long long chem=0;
        i=0,j=n-1;
        sort(skill.begin(),skill.end());
        prev=skill[i]+skill[j];
        while(i<j)
        {
          sum=skill[i]+skill[j];
          if(prev!=sum)
          return -1;
          chem+=(long long)skill[i]*(long long)skill[j];
          i++;
          j--;
        }
        return chem;
    }
};