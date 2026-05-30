class Solution {
    public int[] topKFrequent(int[] nums, int k) {

        HashMap<Integer, Integer> map = new HashMap<>();

        // count frequency
        for(int num : nums) {
            map.put(num, map.getOrDefault(num, 0) + 1);
        }

        // max heap storing numbers
        PriorityQueue<Integer> pq =
            new PriorityQueue<>((a,b) -> map.get(b) - map.get(a));

        // put all numbers into heap
        for(int key : map.keySet()) {
            pq.add(key);
        }

        int[] res = new int[k];

        // take top k frequent
        for(int i=0; i<k; i++) {
            res[i] = pq.poll();
        }

        return res;
    }
}