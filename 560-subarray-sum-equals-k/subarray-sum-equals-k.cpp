class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
           unordered_map<int, int> premap;
           int n=nums.size();
        int pre[n];
        pre[0]=nums[0];  
        int ans = 0;

        for (int i = 1; i < nums.size(); i++) 
             pre[i]= pre[i-1]+nums[i] ;

        for(int i=0;i<n;i++)
        {    
            if(pre[i]==k)
            ans++;
            
            if (premap.find(pre[i]-k) != premap.end()) {
                ans +=premap[pre[i]-k];
            } 
                premap[pre[i]]++; 
        
        }

        return ans;
    }
};