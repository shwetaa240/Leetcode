class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int i=0,k=1,n=nums.size();
        vector<int> ans(n,0);
        for(auto &val:nums)
        {
            if(val%2==0) //even
           { ans[i]=val; //place at even index
             i+=2;
           }               
            else
            {ans[k]=val;
            k+=2;
            }
        }
        return ans;
    }
};