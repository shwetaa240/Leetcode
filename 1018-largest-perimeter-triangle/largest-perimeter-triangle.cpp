class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        int sum=0,i,n=nums.size(),a,b,c;
        sort(nums.begin(),nums.end());
        for(i=n-1;i>=2;i--)
        {
            c=nums[i];
            a=nums[i-1];
            b=nums[i-2];
            if(a+b>c)
            {sum=a+b+c;
            return sum;}
        }
        return sum;
    }
};