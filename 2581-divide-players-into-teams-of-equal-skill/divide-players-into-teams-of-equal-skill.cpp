class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        int i,j,n=skill.size(),sum=0,rem=0;
        long long chem=0;
        vector<int>hash(10001,0) ;
        for(auto &s:skill)
        {
            hash[s]++;
            sum+=s;
        }
        int teams=n/2;
         int tar=sum/teams;
        if(sum%teams!=0)
        return -1;
        for(i=0;i<n;i++)
        {
           rem=tar-skill[i];
           if(hash[rem]<=0)
           return -1;
           chem+=((long long)skill[i]*(long long)rem);
           hash[rem]--;
        }

        return chem/2;
    }
};