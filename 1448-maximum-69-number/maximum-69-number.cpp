class Solution {
public:
    int maximum69Number (int num) {
        string n=to_string(num);
        if(n[0]=='6')
     {
        n[0]='9';
        return stoi(n);
    }
        for(int i=1;i<n.size();i++)
        {
            if(n[i]<n[i-1] )
            {n[i]='9';
            break;}
        }
        return stoi(n);
    }
};