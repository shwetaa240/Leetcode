class Solution {
public:
    vector<int> NextSmaller(const vector<int>& arr){
        int n = arr.size();
        vector<int> nextSmall(n);
        stack<int> stk;
        for (int i = n - 1; i >= 0; i-- ) {
            while (!stk.empty() && arr[i] <= arr[stk.top()]) {
                stk.pop(); // Remove processed element              
            }
            nextSmall[i] = stk.empty() ? n: stk.top();
            stk.push(i);
        }
    return nextSmall;
    }
    vector<int> PrevSmaller(const vector<int>& arr){
        int n = arr.size();
        vector<int> prevSmall(n);
        stack<int> stk;
        for (int i = 0; i < n ; i++) {
            while (!stk.empty() && arr[i] < arr[stk.top()]) {
                stk.pop(); // Remove processed element
            }
            prevSmall[i]=stk.empty() ? -1 : stk.top();
            stk.push(i);
        }
    return prevSmall;
    }
    int sumSubarrayMins(vector<int>& arr) {
        vector<int> pse = PrevSmaller(arr);
        vector<int> nse = NextSmaller(arr);
        int total=0, mod = (int)(1e9 + 7);
        for(int i=0;i<arr.size();i++){
            int left = i-pse[i];
            int right = nse[i]-i;
            total=(total+(left * right * 1LL * arr[i]) % mod) % mod;
        }
        return total;
    }
};