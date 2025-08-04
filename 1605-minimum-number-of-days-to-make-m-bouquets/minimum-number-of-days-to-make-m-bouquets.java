class Solution {
    public int minDays(int[] bloom, int m, int k) {
        
            if ((long)(m) * k > bloom.length) return -1;

        int l = Integer.MAX_VALUE, u = Integer.MIN_VALUE;
        for (int day : bloom) {
            l = Math.min(l, day);
            u = Math.max(u, day);
        }

        int ans = -1;
        while (l <= u) {
            int mid = l + (u - l) / 2;
            if (canMake(bloom, mid, m, k)) {
                ans = mid;
                u = mid - 1;
            } else {
                l = mid + 1;
            }
        }
        return ans;
    }

    private boolean canMake(int[] b, int day, int m, int k) {
        int bouquets = 0, flowers = 0;
        for (int value : b) {
            if (value <= day) {
                flowers++;
                if (flowers == k) {
                    bouquets++;
                    flowers = 0;
                }
            } else {
                flowers = 0;
            }
        }
        return bouquets >= m;
    }

}