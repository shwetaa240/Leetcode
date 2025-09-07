class Solution {
public:
    vector<int> sumZero(int n) {
     int i=0,ele=1;
     vector<int> arr(n,0);
     while(i+1<n)   
     {
        arr[i]=ele;
        arr[i+1]=-ele;
        i+=2;
        ele++;
     }
     return arr;
    }
};