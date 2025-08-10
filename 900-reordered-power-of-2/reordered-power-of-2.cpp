class Solution {
public:
    bool reorderedPowerOf2(int n) {
    
    int i,power;
    string t=to_string(n);
    sort(t.begin(),t.end());
    for(i=0;i<=31;i++)
    {    
        power=1<<i;
        string x=to_string(power);
        sort(x.begin(),x.end());
        if(t==x) 
        return true;
    }
        return false;
    }
    
};