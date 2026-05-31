class Solution {
    public int digitFrequencyScore(int n) {
        HashMap<Integer,Integer> mpp=new HashMap<>();

        int sum=0,num=n;
        while(num!=0)
        {
            sum+=num%10;
            num/=10;
        }
        
        return sum;
    }
}