class Solution {
public:

    bool searchMatrix(vector<vector<int>>& matrix, int t) {
        int i,m=matrix.size()-1,n=matrix[0].size()-1;
        for(auto &mx:matrix)
        { 
            if(mx[n]<t)
            continue;
            else if(mx[n]==t)
            return true;
            else
            { int mid,l=0,u=n;
             while(l<=u)
             { mid=(l+u)/2;
                if(mx[mid]==t)
                return true;
                else if(mx[mid]<t)
                {
                    l=mid+1;
                }
                else
                u=mid-1;
             }
             return false;
            }
        }
        return false;
    }
};