class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
       int i=0,j=1,k,n=nums.size();
       vector<int> odd,even;
       for(i=0;i<n;i+=2)
       {
        even.push_back(nums[i]);
       } 
       sort(even.begin(),even.end());
       for(j=1;j<n;j+=2)
       {
        odd.push_back(nums[j]);
       }
       sort(odd.begin(),odd.end(),greater<int>());
       j=0,k=0;
       for(i=0;i<n;i++)
       {
         if(i%2==0)
         nums[i]=even[k++];
         else
         nums[i]=odd[j++];
       }
       return nums;
    }
};