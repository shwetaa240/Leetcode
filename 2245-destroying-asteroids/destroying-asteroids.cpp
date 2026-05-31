class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& ast) {
        long long sum=mass;
        sort(ast.begin(),ast.end());
        for(int i=0;i<ast.size();i++)
        {
           if(sum<ast[i]) return false;
            else
            sum+=ast[i];
        } 
         return true;
    }
};