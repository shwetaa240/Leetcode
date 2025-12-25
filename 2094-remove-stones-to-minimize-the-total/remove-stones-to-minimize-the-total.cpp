class Solution {
public:
    int minStoneSum(vector<int>& p, int k) {
        priority_queue<int> pq;
        int i,n=p.size(),sum=0,x;

        for(i=0;i<n;i++)
        {
            pq.push(p[i]);
        }

        while(k!=0)
        {
            x=pq.top();
            x-=floor(x/2);
            pq.pop();
            k--;
            pq.push(x);
        }
        while(!pq.empty())
        {
            sum+=pq.top();
            pq.pop();
        }
        return sum;
    }
};