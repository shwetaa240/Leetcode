class Solution {
public:
    long long maximumHappinessSum(vector<int>& hap, int k) {
        long long sum = 0;
        int i,n=hap.size(),c=0,x;
        priority_queue<int> pq;

        for (i = 0; i < n; i++) {
           pq.push(hap[i]);  
        }
        for(i=1;i<=k;i++)
        { 
  x=pq.top();
            if(x-c>=0)
            x=x-c;
            else
            x=0;
          sum+=x;
          pq.pop();
          c++;
        }
        return sum;
    }
};