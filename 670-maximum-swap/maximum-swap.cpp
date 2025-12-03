class Solution {
public:
    int maximumSwap(int num) {
        int maxid=-1,maxdig=-1,l=-1,r=-1;
        string n=to_string(num);
        for(int i=n.size()-1;i>=0;i--)
        {
         if(n[i]>maxdig)
         {
           maxdig=n[i];
           maxid=i;
         }
         if(n[i]<maxdig)
         {
           l=i;
           r=maxid;
         }
        }
        if(l==-1) return num;
        swap(n[l],n[r]);
        return stoi(n);
    }
};