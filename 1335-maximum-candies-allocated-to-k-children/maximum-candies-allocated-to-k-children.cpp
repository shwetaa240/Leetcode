class Solution {
public:
    bool possible(vector <int>& candies, int mid, long long k){
        int n = candies.size();

        for(int i = 0; i < n; i++){
            int diff = candies[i]/mid;
            k -= diff;
            if(k <= 0) return true;
        }

        return false;
    }
    int maximumCandies(vector<int>& candies, long long k) {
        int n = candies.size();
        int l = 1;
        int r = *max_element(candies.begin(), candies.end());
        int ans = 0;

        while(l <= r){
            int mid = l + (r-l)/2;
            if(possible(candies, mid, k)){
                ans = mid;
                l = mid + 1;
            }
            else {
                r = mid - 1;
            }
        }

        return ans;
    }
};