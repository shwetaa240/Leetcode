class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int i,j,k,f=0,n=nums1.size(),m=nums2.size();
        vector<int> ans;
        unordered_map<int,int> mpp;
        for(i=0;i<m;i++)
        {
            mpp[nums2[i]]=i;
        }
        for(i=0;i<n;i++)
        { f=0;
          k=mpp[nums1[i]];
            for(j=k;j<m;j++)
            {
                if(nums1[i]<nums2[j])
                {
                    f=1;
                    ans.push_back(nums2[j]);
                    break;
                }
            }
            if(f==0)
            ans.push_back(-1);
        }
        return ans;
    }
};