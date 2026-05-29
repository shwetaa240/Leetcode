class Solution {
public:
    int minElement(vector<int>& nums) {
       int n=nums.size(),sum=0,mini=INT_MAX;
        for(int i=0;i<n;i++)
        { sum=sum_d(nums[i]);
            mini=min(mini,sum);
        }
  return mini;
    }
    int sum_d(int num){
        int d,sum=0;
        while(num!=0)
        {
          d=num%10;
          sum+=d;
          num/=10;
        }
        return sum;
    }
};