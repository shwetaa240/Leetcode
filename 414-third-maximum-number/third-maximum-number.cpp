class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int> distinct(nums.begin(), nums.end());

        priority_queue<int> maxNum;

        for(auto x : distinct) {
            maxNum.push(x);
        }

        if(maxNum.size() > 2){
            maxNum.pop();
            maxNum.pop();
        } 

        return maxNum.top();

    }
};