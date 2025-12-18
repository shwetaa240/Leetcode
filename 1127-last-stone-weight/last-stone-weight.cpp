class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> pq;
        int ans,a,b;

        for(auto &i:stones)
        {
            pq.push(i);
        }
        while(pq.size()>=2)
        {
          a=pq.top();
          pq.pop();
          b=pq.top();
          pq.pop();
          if(a!=b) pq.push(a-b);
        }
        return pq.empty()?0:pq.top();
    }
};