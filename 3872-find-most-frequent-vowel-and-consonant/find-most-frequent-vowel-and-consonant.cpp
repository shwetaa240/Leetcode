#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxFreqSum(string s) {
        map<char,int> mpp;
        int maxc=0,maxv=0;
        for (auto &i : s) {
            mpp[i]++;
        }
        for (auto &i : mpp) {
            if(isVowel(i.first))
                maxv=max(maxv,i.second);
            else 
                maxc=max(maxc,i.second);
        }
        return maxc+maxv;
    }
    bool isVowel(char ch)
    {
        return ch=='a'|| ch=='e'|| ch=='i'|| ch=='o'|| ch=='u' ;
    }
};