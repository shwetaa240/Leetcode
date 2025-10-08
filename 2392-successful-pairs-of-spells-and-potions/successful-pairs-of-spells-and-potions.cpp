class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potion, long long s) {
        vector<int> ans;
        int c=0;

        sort(potion.begin(),potion.end());
        for(auto i:spells)
        { 
         c=valid(i,potion,s);
         ans.push_back(c);
        }
        return ans;
    }
    int valid(int sp,vector<int> &potion,long long s)
    {
        int l=0,u=potion.size()-1,ans=potion.size();
        while(l<=u)
        { 
            int m=l+(u-l)/2;
            if((long long)potion[m]*sp>=s)
            {   ans=m;
                u=m-1;
            }
            else{
                l=m+1;
            }
        }
        return potion.size()-ans;
    }
};