class Solution {
public:
    int reverseDegree(string s) {
    int sum=0,c=26;
    unordered_map<char,int> mpp;
    for(char ch='a'; ch<='z' ; ch++)
    { 
     mpp[ch]=c--;
    }
     
     for(int i=0;i<s.size();i++)
     {
         sum+=mpp[s[i]]*(i+1);
     }
 
    return sum;


    }
};