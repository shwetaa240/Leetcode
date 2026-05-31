class Solution {
    public int digitFrequencyScore(int n) {
        HashMap<Integer,Integer> mpp=new HashMap<>();

        int i,d,sum=0,num=n;
        while(num!=0)
        {
            d=num%10;
            mpp.put(d,mpp.getOrDefault(d,0)+1);
            num/=10;
        }
        for(int key:mpp.keySet())
        {
          sum+=key*mpp.get(key);
        }
        return sum;
    }
}