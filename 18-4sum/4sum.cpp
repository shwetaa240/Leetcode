class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        set<vector<int>> st;
        int i,j,n=nums.size();
        sort(nums.begin(),nums.end());
        for(i=0;i<n-3;i++)
        {
            for(j=i+1;j<n-2;j++)
             {
                int k=j+1,l=n-1;
                while(k<l)
                {
                long long sum=(long long)nums[i]+nums[j]+nums[k]+nums[l];
                  if(sum==(long long)target)
                 { st.insert({nums[i],nums[j],nums[k],nums[l]});
                  k++;l--;
                }
                else if(sum<(long long)target)
                {
                  k++;
                }
                else
                   l--;
                }

             }
        }
        for(auto arr:st)
            ans.push_back(arr);
        return ans;
    }
};