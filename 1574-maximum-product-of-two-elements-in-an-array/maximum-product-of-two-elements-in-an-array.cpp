class Solution {
public:
    int maxProduct(vector<int>& nums) {
        priority_queue<int> maxh;
        int a,b;
        for(int i=0;i<nums.size();i++)
        {
            maxh.push(nums[i]);
        }
        a=maxh.top();
        maxh.pop();
        b=maxh.top();
        maxh.pop();
        return (a-1)*(b-1);
    }
};